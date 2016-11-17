#ifndef STACH_H_
#define STACH_H_
#include<stdbool.h>
typedef struct node
{
	int element;
	struct node *link;

}*pNode, Node;

typedef struct tag
{
	pNode slist;
	int num;
}*pstack;

extern bool init_stack(pstack *S);
extern bool push(int elemnt, pstack *s);
extern bool pop(int *p, pstack *s);


#endif
