#include "stdio.h"
#define StackSize 100 /*�ٶ�Ԥ�����ջ�ռ����Ϊ100��Ԫ��*/  	
typedef int DataType;/*�ٶ�ջԪ�ص���������Ϊ�ַ�*/  	
typedef struct{
      DataType data[StackSize];
      int top;
}SeqStack;   
/* ��ջ��*/
void Initial(SeqStack *S)
{/*��˳��ջ�ÿ�*/
      S->top=-1;
} 
/*��ջ��*/
int IsEmpty(SeqStack *S)
{
    return S->top==-1;
}
/*��ջ��*/
int IsFull(SeqStack *S)
{
	return S->top==StackSize-1;
}
/*��ջ*/
void Push(SeqStack *S,DataType x)
{
    if (IsFull(S))
	{
		printf("ջ����"); /*����,�˳�����*/
		exit(1);
	}
    S->data[++S->top]=x;/*ջ��ָ���1��x��ջ*/
}
/*��ջ*/
DataType Pop(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("ջΪ��"); /*����,�˳�����*/
		exit(1);
	}
	return S->data[S->top--];/*ջ��Ԫ�ط��غ�ջ��ָ���1*/
}
/* ȡջ��Ԫ��*/
DataType Top(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("ջΪ��"); /*����,�˳�����*/
		exit(1);
	}
	return S->data[S->top];
}
void MultiBaseOutput (int N,int B)
{/*����N�ǷǸ���ʮ���������������ֵ��B������*/
	int i;
	SeqStack S;
	Initial(&S);
	while(N){  /*�����������B���Ƶĸ�λ���֣��������ջ*/
		Push(&S,N%B); /*��bi��ջ0<=i<=j*/
		N=N/B;
	}
	while(!IsEmpty(&S)){  /*ջ�ǿ�ʱ��ջ���*/
		i=Pop(&S);
		printf("%d",i);
	}
}
void main()
{
	int num = 0;
	int baseNum = 0;
	printf("please input a number\n");
	scanf("%d", &num);
	printf("please input a base number\n");
	scanf("%d", &baseNum);
	char *s;
	if (baseNum == 2)
		s = "binary";
	else if (baseNum == 8)
		s = "0";
	else if (baseNum == 16)
		s = "0x";
	printf("%s", s);
	MultiBaseOutput(num, baseNum);
	printf("\n");
}
