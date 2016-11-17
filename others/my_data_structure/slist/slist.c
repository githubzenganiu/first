#include"slist.h"
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

//using namespace std;


pNode head = NULL;

pNode init_list()
{
	head = (pNode)malloc(sizeof(Node));
	if (head == NULL)
	{
		PRINT("allocate memory error");
		return NULL;
	}
	head->element = 0;
	head->next = NULL;
	return head;
}

bool  append_element(int element)
{
	if (head == NULL)
	{
		PRINT("list is empty");
		return false;
	}
	pNode ptemp = head;
	while (ptemp->next != NULL)
	{
		ptemp = ptemp->next;
	}
	pNode newNode = (pNode)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		PRINT("allocate memory error");
		return false;
	}
	newNode->element = element;
	newNode->next = NULL;
	ptemp->next = newNode;
	head->element++;
	return true;
}


bool insert_element(int index, int element)
{
	if (head == NULL)
	{
		PRINT("list is empty");
		return false;
	}
	int len = head->element;
	if (index <1 )
	{
		index = 1;

	}
	else if (index >(len+1))
	{
		//index = (len+1);
		bool flag = append_element(element);
		if (flag)
			return true;
		else
			return false;
	}
	int position = 1;
	pNode ptemp = head;
	while(ptemp->next!=NULL)
	{
		//position++;
		if (index == position)
		{
			pNode newNode = (pNode)malloc(sizeof(Node));
			if (newNode == NULL)
			{
				PRINT("allocate memory error");
				return false;
			}
			newNode->element = element;
			newNode->next=ptemp->next;
			ptemp->next = newNode;
			return true;
		}
		ptemp = ptemp->next;
		position++;
	}
	
	return false;

}
void print_list()
{
	if (head == NULL)
	{
		PRINT("list is empty");
		return ;
	}
	pNode ptemp = head->next;
	while (ptemp != NULL)
	{
		printf("%d\t", ptemp->element);
		ptemp= ptemp->next;
	}
	printf("\n");

}

void destroy_list()
{
	if (head == NULL)
	{
		PRINT("list is empty");
		return ;
	}
	pNode p, q;
	p = head;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}

}

bool delete_element(int element)
{
	if (head == NULL)
	{
		PRINT("list is empty");
		return false;
	}
	pNode ptemp = head;
	bool flag = false;
	while (ptemp->next != NULL)
	{
		if (ptemp->next->element == element)
		{
			flag = true;
			pNode ptr = ptemp->next;
			ptemp->next=ptr->next;
			free(ptr);
			head->element--;
			break;
		}

		ptemp = ptemp->next;
	}
	return flag;

}
