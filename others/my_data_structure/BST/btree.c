#include"btree.h"
#include<stdio.h>

pNode  insert_bst(int element, BST T)
{
	if (T == NULL)
	{
		T = (pNode)malloc(sizeof(Node));
		if (T == NULL)
		{
			PRINT("allocate memory error");
			return false;
		}
		T->lptr = NULL;
		T->rptr = NULL;
		T->element = element;
		
	}
	else if (element < T->element)
		T->lptr = insert_bst(element, T->lptr);
	else if (element > T->element)
		T->rptr = insert_bst(element, T->rptr);
	return T;
}

pNode  find_max(BST T)
{
	if (T == NULL)
		return NULL;
	if (T->rptr == NULL)
		return T;
	else if (T->rptr != NULL)
		find_max(T->rptr);
}

pNode find_min(BST T)
{
	if (T == NULL)
		return NULL;
	if (T->lptr == NULL)
		return T;
	else if (T->lptr != NULL)
		find_min(T->lptr);
}

void inorder_traversal(BST T)
{
	if (T == NULL)
		return;
	if (T->lptr != NULL)
		inorder_traversal(T->lptr);
	printf("%d\t", T->element);
	if (T->rptr != NULL)
		inorder_traversal(T->rptr);
}

pNode destroy_bst(BST T)
{
	if (T != NULL)
	{
		destroy_bst(T->lptr);
		destroy_bst(T->rptr);
		free(T);
	}
	return T;
}

