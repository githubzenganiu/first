#ifndef JH_MEMORY_POOL
#define JH_MEMORY_POOL

//=============================================
// @title        memory_pool.h
// @author       Sheljohn (Jonathan H)
// @contact      sh3ljohn [at] gmail
//=============================================

/* LICENCE

Anybody can use it for anything legal and do so at their own risk (meaning that 
I provide a free software without any guarantee that it is 100% reliable). If you 
do use it, please send me a short message, I'd love to see if it is useful and who 
uses it. That's all :)

*/

#include <cstdlib>



	/********************     **********     ********************/
	/********************     **********     ********************/



/*

Define the following flag if you want each allocation to be 0-initialized.
If memory doesn't have to be 0-initialized, just leave the flag undefined.
You can also define the same flag in your sources.

*/
//#define INITIALIZE_MEMORY_POOL_ALLOCATION


// Internal macro, please don't change.
#ifdef INITIALIZE_MEMORY_POOL_ALLOCATION
#define MEMORY_POOL_ALLOCATION(n,size) calloc( n, size )
#else
#define MEMORY_POOL_ALLOCATION(n,size) malloc( n * size )
#endif



	/********************     **********     ********************/
	/********************     **********     ********************/



/*

pool_container class
Author: Jonathan Hadida (Sheljohn), Feb 013
-------------------------------------------

This class serves two main functions:
1. Allocate memory, maintain a pointer to the allocated memory and 
  handle deallocation when the object is destroyed.
2. Chain to another pool_container instance on extension request, resulting
  in a "forward_list"-like data structure.

Note that the deallocation request is cascaded automatically to the chained
containers from the original destruction call. If an instance has not been
allocated on construction (empty constructor), the next extension request
will affect the current instance. Otherwise and/or on all subsequent extension
requests, a new container will be created, initialized and chained to the
last allocated instance in the chain, and a pointer to the container handling 
the allocation (either the current instance or a newly constructed container) 
is returned. Null size extension requests return a nullptr. The current instance 
allocation status can be checked via the method "is_allocated", and the allocated 
memory can be accessed via the method "get". NO assumption whatsoever is made 
on the data type (template parameter), so feel free to use whatever you need.

*/
template <class T>
class pool_container
{
public:

	// Public types
	typedef T data_type;
	typedef pool_container<T> self_type;

	// Ctors
	pool_container(): allocated(nullptr), next_container(nullptr) {}

	pool_container( const unsigned& size ): next_container(nullptr)
		{
			allocated = (size == 0) ? nullptr:
				(data_type*) MEMORY_POOL_ALLOCATION( size, sizeof(data_type) );
		}

	// Dtor
	~pool_container()
		{
			// Free allocation
			if ( allocated )
			{
				free(allocated);
				allocated = nullptr;
			}

			// Destroy attached container
			if ( next_container ) 
			{
				delete next_container;
				next_container = nullptr;
			}
		}

	// Get pointer to allocated memory
	inline data_type* get() const { return allocated; }

	// Check if the container contains something
	inline bool is_allocated() const { return allocated; }

	// Request new allocation
	self_type* extend( const unsigned& size )
		{
			// Check size value
			if ( size == 0 ) return nullptr;

			// Check if 'this' is allocated
			if ( !allocated )
			{
				allocated = (data_type*) MEMORY_POOL_ALLOCATION( size, sizeof(data_type) );
				return this;
			}

			// Pass allocation request to next container
			return next_container ? 
				   next_container->extend(size):
				(  next_container = new self_type(size)  );
		}

private:

	// Disable copy and assignment
	pool_container( const self_type& other ) {}
	self_type& operator= ( const self_type& other ) {}

	// Members
	data_type* allocated;
	self_type* next_container;
};



/*

memory_pool class
Author: Jonathan Hadida (Sheljohn), Feb 013
-------------------------------------------

The memory_pool class is the public interface to be used in your code.
Initial size and chunk size are specified on construction or using the
"initialize" method if the pool is not defined where it is declared. The
chunk size corresponds to the size of memory chunk allocations occuring
after the initialization. It can be modified after the pool initialization
using the method "set_chunk_size". Allocated objects are accessed one at
a time using the method "get", which triggers new allocations when needed.
A null chunk size will force the method "get" to return 'nullptr's, but the
pool should be safe as far as memory deallocation is concerned.

*/
template <class T>
class memory_pool
{
public:

	// Public types
	typedef T data_type;
	typedef memory_pool<T> self_type;
	typedef pool_container<T> storage_type;

	// Ctors
	memory_pool() { clear(); }
	memory_pool( const unsigned& _init_size, const unsigned& _chunk_size )
		{ clear(); initialize( _init_size, _chunk_size ); }

	// Clear everything
	void clear()
		{
			// Disable pointers
			current = last = nullptr;

			// Null chunk size
			chunk_size = 0;

			// Destroy container
			container.~pool_container();
			current_container = &container;
		}

	// Initialize pool
	bool initialize( const unsigned& _init_size, const unsigned& _chunk_size )
		{
			// Check if 'this' is already initialized
			if ( container.is_allocated() || _init_size == 0 ) return false;

			// Otherwise, initialize container
			current_container = container.extend( _init_size );

			// Pointers to data
			current = container.get();
			last    = current + _init_size;

			// Update chunk_size value
			chunk_size = _chunk_size;

			// Report setup success
			return true;
		}

	// Set new chunk_size
	void set_chunk_size( const unsigned& _chunk_size )
		{ chunk_size = _chunk_size; }

	// Get next element in pool
	data_type* get()
		{
			// Forbid null chunk_size
			if ( chunk_size == 0 ) return nullptr;

			// Extend storage if needed
			if ( current == last )
			{
				current_container = current_container->extend(chunk_size);
				current = current_container->get();
				last    = current + chunk_size;
			}

			// Return pointer to object
			return current++;
		}

private:

	// Disable copy and assignment
	memory_pool( const self_type& other ) {}
	self_type& operator= ( const self_type& other ) {}

	// Members
	unsigned      chunk_size;
	data_type     *current, *last;
	storage_type  container, *current_container;
};

#endif