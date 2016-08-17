#include<stdio.h>
float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;
	for (i=0; i<=length-1; i++)
		result += a[i];
	return result;

}
int main()
{
	float a[4] = {1.2, 3.4, 5.3, 8.9};
	float final = sum_elements(a, 4);
	printf("%f\n", final);
	return 0;
}
