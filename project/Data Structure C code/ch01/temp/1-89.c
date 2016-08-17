#include<stdio.h>
#define N 8
#define MAXSIZE 20 /* һ������ʾ����С˳�������󳤶� */
typedef int InfoType; /* ������������������� */
typedef int KeyType; /* ����ؼ�������Ϊ���� */
typedef struct
{
  KeyType key; /* �ؼ����� */
  InfoType otherinfo; /* ������������������������ж��� */
}RedType; /* ��¼���� */
typedef struct
{
  RedType r[MAXSIZE+1]; /* r[0]���û������ڱ���Ԫ */
  int length; /* ˳������� */
}SqList; /* ˳������� */
#define LT(a,b) ((a)<(b))
typedef SqList HeapType; /* �Ѳ���˳����洢��ʾ */
void HeapAdjust(HeapType *H,int s,int m) 
{ /* ��֪H.r[s..m]�м�¼�Ĺؼ��ֳ�H.r[s].key֮�������ѵĶ��壬������ */
  /* ����H.r[s]�Ĺؼ���,ʹH.r[s..m]��Ϊһ���󶥶�(�����м�¼�Ĺؼ��ֶ���) */
  RedType rc;
  int j;
  rc=(*H).r[s];
  for(j=2*s;j<=m;j*=2)
  { /* ��key�ϴ�ĺ��ӽ������ɸѡ */
    if(j<m&&LT((*H).r[j].key,(*H).r[j+1].key))
      ++j; /* jΪkey�ϴ�ļ�¼���±� */
    if(!LT(rc.key,(*H).r[j].key))
      break; /* rcӦ������λ��s�� */
    (*H).r[s]=(*H).r[j];
    s=j;
  }
  (*H).r[s]=rc; /* ���� */
}
void HeapSort(HeapType *H)
{ /* ��˳���H���ж�����*/
  RedType t;
  int i;
  for(i=(*H).length/2;i>0;--i) /* ��H.r[1..H.length]���ɴ󶥶� */
    HeapAdjust(H,i,(*H).length);
  for(i=(*H).length;i>1;--i)
  { /* ���Ѷ���¼�͵�ǰδ������������H.r[1..i]�����һ����¼�໥���� */
    t=(*H).r[1];
    (*H).r[1]=(*H).r[i];
    (*H).r[i]=t;
    HeapAdjust(H,1,i-1); /* ��H.r[1..i-1]���µ���Ϊ�󶥶� */
  }
}
void print(HeapType H)
{
  int i;
  for(i=1;i<=H.length;i++)
    printf("(%d,%d)",H.r[i].key,H.r[i].otherinfo);
  printf("\n");
}
void main()
{
  RedType d[N]={{49,1},{38,2},{65,3},{97,4},{76,5},{13,6},{27,7},{49,8}};
  HeapType h;
  int i;
  for(i=0;i<N;i++)
    h.r[i+1]=d[i];
  h.length=N;
  printf("����ǰ:\n");
  print(h);
  HeapSort(&h);
  printf("�����:\n");
  print(h);
}