#include"slist.h"

int main()
{
	bool  ret;
	ret = init_list();
	if (!ret)
	{
		PRINT("init list error");
		return -1;
	}
	ret = append_element(89);
	if (!ret)
	{
		PRINT("append error");
		return -1;
	}
		ret = append_element(14);
	if (!ret)
	{
		PRINT("append error");
		return -1;
	}
		ret = append_element(14);
	if (!ret)
	{
		PRINT("append error");
		return -1;
	}
	ret = append_element(100);
	if (!ret)
	{
		PRINT("append error");
		return -1;
	}
	print_list();
	
	
	ret = insert_element(1,999);
	ret = insert_element(2,8888);
	ret = insert_element(5,10000);
	ret = insert_element(7,77);
	ret = insert_element(0,23);
	ret = insert_element(100,55);
	print_list();
	
	delete_element(23);
	print_list();
	
	
	delete_element(55);
	print_list();
	
	destroy_list();
	return 0;
}
