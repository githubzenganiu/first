#include"btree.h"
int main()
{
	BST T;
	T = insert_bst(10, T);
	T = insert_bst(6, T);
	T = insert_bst(11, T);
	T = insert_bst(2, T);
	T = insert_bst(5, T);
	T = insert_bst(9, T);
	T = insert_bst(12, T);

	printf("The max number %d\n", find_max(T)->element);
	printf("The min number %d\n", find_min(T)->element);
	inorder_traversal(T);
	printf("\n");
	destroy_bst(T);
	return 0;
}
