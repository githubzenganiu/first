#ifndef BTREE_H_
#define BTREE_H_
#define DEBUG
#ifdef DEBUG
#define PRINT(str) printf("%s\n", str);
#else
#define PRINT(str) 
#endif
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
	int element;
	struct node *lptr;
	struct node *rptr;
}Node, *pNode;

typedef pNode BST;
//extern bool init_bst(BST T);
extern pNode insert_bst(int element, BST T);
extern pNode find_max(BST T);
extern pNode find_min(BST T);
extern pNode delete_bst(BST T);
extern pNode destroy_bst(BST T);
extern void inorder_traversal(BST T);

#endif
