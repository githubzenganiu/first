#include<stdio.h>

int liner_find(int array[], int n, int key)
{
	for (int i=0; i<n; ++i)
	{
		if (array[i] == key)
			return i;
	}
	return -1;

}

int binary_search(int array[], int n, int key)
{
	int high = n-1;
	int low = 0;
	while (low <= high)
	{
		int mid = (low + high)/2;
		int midValue = array[mid];
		if (midValue < key)
		{
			low++;
		}
		else if (midValue > key)
		{
			high--;
		}
		else
			return mid;

	}
	return -1;
	

}

int main()
{
	int array[6] = {11,2,3,21,13,3};
	printf("%d\n", liner_find(array, 6, 11));
	printf("%d\n", binary_search(array, 6, 11));

}
