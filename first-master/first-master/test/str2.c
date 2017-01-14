#include<stdio.h>
#include<wchar.h>
#include<stdlib.h>
int main()
{
	wchar_t wide_str1=L"中国，长江，黄河";
	wchar_t *wide_str2 = (wchar_t*)malloc((wcslen(wide_str1)+1)*sizeof(wchar_t));
	if (wide_str2 == NULL)
	{
		printf("allocate memory error\n");
		return -1;
	}
	free(wide_str2);
	//printf("%s\n", wide_str1);
	wide_str2 = NULL;
	return 0;
}
