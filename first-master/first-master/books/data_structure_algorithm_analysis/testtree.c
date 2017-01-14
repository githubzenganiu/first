#include "tree.h"
#include <stdio.h>

int main( )
{
    SearchTree T;
    Position P;
    int i;
    int j = 0;

    T = MakeEmpty( NULL );
    /*for( i = 0; i < 50; i++, j = ( j + 7 ) % 50 )
        T = Insert( j, T );
    for( i = 0; i < 50; i++ )
        if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )
            printf( "Error at %d\n", i );

    for( i = 0; i < 50; i += 2 )
        T = Delete( i, T );

    for( i = 1; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )
            printf( "Error at %d\n", i );
    for( i = 0; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) != NULL )
            printf( "Error at %d\n", i );

    printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ),
               Retrieve( FindMax( T ) ) );*/
	T = Insert(6, T);
	T = Insert(5, T);
	T = Insert(7, T);
	T = Insert(3, T);
	T = Insert(9, T);
	T = Insert(4, T);
    printf("\nMiddle order traversal\n");
    InorderTraversal(T);
    printf("\nPre order traversal\n");
    PreorderTraversal( T);
    printf("\nPost order traversal\n");
	PostTraversal( T);

    return 0;
}

