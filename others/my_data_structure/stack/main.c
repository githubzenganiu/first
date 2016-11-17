#include"stack.h"
int main()
{
	pstack s;
	init_stack(&s);
	push(1,&s);
	push(2,&s);
	push(3,&s);
	push(4,&s);
	int num;
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);
	pop(&num, &s);


	return 0;
}
