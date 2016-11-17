#include"stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
bool init_stack(pstack *s)
{
	if ((*s) != NULL)
	{
		printf("the stack has already initialed\n");
		return false;
	}
	*s = (pstack)malloc(sizeof(struct tag));
	if ((*s) == NULL)
	{
		printf("allocate memory error\n");
		return false;
	}
	(*s)->num = 0;//num of elements
	(*s)->slist = (pNode)malloc(sizeof(Node));
	if (((*s)->slist) == NULL)
	{
		printf("allocate memory error\n");
		free(*s);
		return false;
	}
	(*s)->slist->element = 0;
	(*s)->slist->link = NULL;
	return true;
}

bool push(int element, pstack *s)
{
	if (*s==NULL)
	{
		printf("havn't init the stack\n");
		return false;
	}

	pNode ptemp = (*s)->slist;
	while (ptemp->link != NULL)
	{
		ptemp = ptemp->link;
	}
	pNode newNode=(pNode)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		printf("allocate memory error\n");
		return false;
	}
	newNode->link = NULL;
	newNode->element = element;
	ptemp->link = newNode;
	(*s)->num++;
	printf("%d\n", (*s)->num);
	return true;
}

bool pop(int *p, pstack *s)
{
	if (*s==NULL)
	{
		printf("havn't init the stack\n");
		return false;
	}
	pstack ptr = *s;
	if (ptr->num == 0)
	{
		printf("the stack is empty\n");
		return false;	
	}
	pNode ptemp = ptr->slist;
	int i = 0;
	while (ptemp->link!= NULL)
	{
		ptemp = ptemp->link;
		i++; 
		if (i == (ptr->num))
			break;

	}
	pNode delNode = ptemp;
	ptemp = NULL;
	assert(delNode != NULL);
	*p = delNode->element;
	printf("the element is %d\n", *p);
	free(delNode);
	ptr->num--;
	return true;
}
