#include<stdio.h>
int main(int argc,char *argv[])
{
    struct student
    {
        char name[10];
        int number;
    };
    FILE *fp=NULL;
    struct student student[1],*qq;
if((fp=fopen("mytemp","r"))==NULL)
    {
        printf("can not open file!\n");
		return -1;
    }
    fseek(fp,sizeof(struct student),0); //��λ���ڶ����ṹ��,�ļ���ʼλ�ã�ƫ��sizeof(struct student)�ĳ���
    fread(student,sizeof(struct student),1,fp); // ���ڶ����ṹ�������дstudent�� 
    printf("name\t\t number\n");
    qq=student;
    printf("%s\t\t %d\n",qq->name,qq->number); //���student�е�����
    fclose(fp); //�ر��ļ���
    return 0;
}
