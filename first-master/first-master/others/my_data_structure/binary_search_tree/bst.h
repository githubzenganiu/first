#ifndef BST_H_
#define BSE_H_

typedef struct node_tag
{
	int element;
	struct node_tag *left;
	struct node_tag *right;

}Node, *pNode;

typedef pNode SearchTree;

SearchTree Insert(int element, SearchTree T);
SearchTree Delete(int element, SearchTree T);
 FindMin()


#endif
