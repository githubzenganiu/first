#include<stdio.h>
#include<stdlib.h>
#include<wchar.h>
#include<iostream>
int test1()
{
	wchar_t wide_str1[] = L"我们中国人";
	wchar_t *wide_str3 = (wchar_t *)malloc(wcslen(wide_str1)+1);
	if (wide_str3 == NULL)
	{	
		printf("allocate memory error\n");
		return -1;
	}
	//printf("%s\n", wide_str1);
	std::wcout<<wide_str1<<std::endl;
	free(wide_str3);
	wide_str3 = NULL;
	return 0;
}

int main()
{
	test1();
	return 0;
}
