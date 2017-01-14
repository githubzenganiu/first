MemoryPool Usage
================

An Efficient Single-Header C++ Memory Pool.

Initialization
--------------

To use MemoryPool, just download the header file and include it in your sources. You can then use the class `memory_pool`.

#### Initial and Chunk Sizes

There are two sizes that must be specified (and not null) in order for the pool to work correctly:

+  `init_size`: This corresponds to the initial allocation made by the pool. The actual memory allocated will be `init_size*sizeof(T)` where `T` is the template type specified at the declaration.
+  `chunk_size`: This is the size of subsequent allocations that will occur after the initialization if needed (i.e. if you request more objects than the initial allocation).

#### Initialization Example

Given these two values, the pool can be initialized at declaration or later on:

	// Direct initialization
	memory_pool<T> pool( init_size, chunk_size );

	// Empty constructor
	memory_pool<T> pool;
		// ...
	pool.initialize( init_size, chunk_size );

Note that the method `initialize` returns `false` on failure (in case the pool is already initialized for instance).

#### 0-initialization of memory

By default, the allocations do not initialize the memory (it is simply garbage). If you would like the memory to be initialized to 0, simply define the flag `INITIALIZE_MEMORY_POOL_ALLOCATION` in your sources, or uncomment the corresponding line in the header.

Usage
-----

#### The `get` method

Once the pool is initialized, you may request an arbitrary number of elements using the method `get` as in `T *a = pool.get();`. The pool will handle the additional allocations when needed.

#### Dynamic Chunk Size

The chunk size can be changed at any time after or even before the initialization of the pool. This allows to tweak the allocation pattern during execution if needed.

#### Clear Allocations

The allocations are automatically dropped upon the destruction of the pool. But if you want to clear the allocations earlier in your program, you may use the method `clear` as in `pool.clear()`. You can then use `initialize` again to start creating another pool.

Licence
-------

Anybody can use it for anything legal and do so at their own risks (meaning that I provide a free software without any guarantee that it is 100% reliable). If you use it, please send me a short message, I'd love to see if it is useful and who uses it. That's all :)
