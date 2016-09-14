#include<stdio.h>
#include<assert.h>
void *memcpy(void *dest, const void *src, size_t n)
{
	assert(dest !=NULL && src != NULL);
	char *pa = (char *)dest;
	 char *pb = (char *)src;
	 while (n-- > 0)
	 {	
		*pa++ = *pb++;
	 }
	return dest;

}
int main()
{
	int a = 10;
	int b;
	memcpy(&b, &a, sizeof(int));
	printf("%d\n", b);
	return 0;
}
