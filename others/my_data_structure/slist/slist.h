#ifndef SLIST_H_
#define SLIST_H_

#ifdef DEBUG
#define PRINT(str) printf("%s\n", str);
#else
#define PRINT(str) 
#endif
#include<stdbool.h>


typedef struct node
{
	int element;
	struct node *next;
}Node,*pNode;

extern pNode init_list();
extern bool append_element(int element);
extern bool  insert_element(int index, int element);
extern bool  delete_element(int element);
//extern bool  delete_node(int index);
extern void  print_list();
extern void  destroy_list();


#endif
