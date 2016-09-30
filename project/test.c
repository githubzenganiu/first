 #include <stdio.h>

#include <malloc.h>
#include<stdlib.h>

#define STACK_SIZE 200

#define   EleType  char

//栈的节点声明

typedef struct Stack{

    EleType top;

    EleType array[STACK_SIZE];

    }Stack,*pStack;

//初始化一个空栈

int Init_Stack(pStack S){

    S->top = 0;//top为0表示空栈

    return 1;

    }

//测试是否为空栈

int IsEmpty(pStack S){

    if(S->top==0)return 1;

       else return 0;

    }

//元素e入栈

int Push(pStack S,EleType e){

    S->top++;

    S->array[S->top] = e;

    return S->top;

    }

//出栈,并返回该元素值

EleType Pop(pStack S){

    S->top--;

    return S->array[S->top+1];

    }

//括号匹配函数

int Bracket(pStack S,char a[],int length){

     int i=0;

     for(;i<length;i++){

        if(a[i]==']'||a[i]==')'){

            switch(a[i]){

               case ')': if('('!=Pop(S)){Error();};break;

               case ']': if('['!=Pop(S)){Error();};break;

               default:printf("Error!\n");break;

                }

            }else{

                if((a[i]=='(')||(a[i]=='[')){

                 Push(S,a[i]);

                 }

                 else{continue;}

                }

        }

    if(IsEmpty(S)){

        printf("ok!\n");

        return 1;

        }

       else{

           printf("failed\n");

           return 0;}

    }

int Error(){

    printf("Error\n");exit(-1);

    }

void main(){

    pStack S;

 

    //char a[]="[([234][dfg])]";
	char a[256] = {0};
	fgets(a,256, stdin);
	printf("inputs length is %d\n", strlen(a));

    S = (pStack)malloc(sizeof(Stack));

    Init_Stack(S);

    Bracket(S,a,sizeof(a)/sizeof(char));


    }
