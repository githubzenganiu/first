#include<stdio.h> /* EOF(=^Z\BB\F2F6),NULL */
#include<math.h> /* floor(),ceil(),abs() */
/* \BA\AF\CA\FD\BD\E1\B9\FB״̬\B4\FA\C2\EB */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
typedef int Status; /* Status\CAǺ\AF\CA\FD\B5\C4\C0\E0\D0\CD,\C6\E4ֵ\CAǺ\AF\CA\FD\BD\E1\B9\FB״̬\B4\FA\C2룬\C8\E7OK\B5\C8 */
typedef struct
{
  char *ch; /* \C8\F4\CAǷǿմ\AE,\D4򰴴\AE\B3\A4\B7\D6\C5\E4\B4洢\C7\F8,\B7\F1\D4\F2chΪNULL */
  int length; /* \B4\AE\B3\A4\B6\C8 */
}HString;
Status StrAssign(HString *T,char *chars)
{ /* \C9\FA\B3\C9һ\B8\F6\C6\E4ֵ\B5\C8\D3ڴ\AE\B3\A3\C1\BFchars\B5Ĵ\AET */
  int i,j;
  if((*T).ch)
    free((*T).ch); /* \CAͷ\C5Tԭ\D3пռ\E4 */
  i=strlen(chars); /* \C7\F3chars\B5ĳ\A4\B6\C8i */
  if(!i)
  { /* chars\B5ĳ\A4\B6\C8Ϊ0 */
    (*T).ch=NULL;
    (*T).length=0;
  }
  else
  { /* chars\B5ĳ\A4\B6Ȳ\BBΪ0 */
    (*T).ch=(char*)malloc(i*sizeof(char)); /* \B7\D6\C5䴮\BFռ\E4 */
    if(!(*T).ch) /* \B7\D6\C5䴮\BFռ\E4ʧ\B0\DC */
      exit(OVERFLOW);
    for(j=0;j<i;j++) /* \BF\BD\B1\B4\B4\AE */
      (*T).ch[j]=chars[j];
    (*T).length=i;
  }
  return OK;
}
Status StrCopy(HString *T,HString S)
{ /* \B3\F5ʼ\CC\F5\BC\FE:\B4\AES\B4\E6\D4ڡ\A3\B2\D9\D7\F7\BD\E1\B9\FB: \D3ɴ\AES\B8\B4\D6Ƶô\AET */
  int i;
  if((*T).ch)
    free((*T).ch); /* \CAͷ\C5Tԭ\D3пռ\E4 */
  (*T).ch=(char*)malloc(S.length*sizeof(char)); /* \B7\D6\C5䴮\BFռ\E4 */
  if(!(*T).ch) /* \B7\D6\C5䴮\BFռ\E4ʧ\B0\DC */
    exit(OVERFLOW);
  for(i=0;i<S.length;i++) /* \BF\BD\B1\B4\B4\AE */
    (*T).ch[i]=S.ch[i];
  (*T).length=S.length;
  return OK;
}
Status StrEmpty(HString S)
{ /* \B3\F5ʼ\CC\F5\BC\FE: \B4\AES\B4\E6\D4ڡ\A3\B2\D9\D7\F7\BD\E1\B9\FB: \C8\F4SΪ\BFմ\AE,\D4򷵻\D8TRUE,\B7\F1\D4򷵻\D8FALSE */
  if(S.length==0&&S.ch==NULL)
    return TRUE;
  else
    return FALSE;
}

int StrCompare(HString S,HString T)
{ /* \C8\F4S>T,\D4򷵻\D8ֵ>0;\C8\F4S=T,\D4򷵻\D8ֵ=0;\C8\F4S<T,\D4򷵻\D8ֵ<0 */
  int i;
  for(i=0;i<S.length&&i<T.length;++i)
    if(S.ch[i]!=T.ch[i])
      return S.ch[i]-T.ch[i];
  return S.length-T.length;
}

int StrLength(HString S)
{ /* \B7\B5\BB\D8S\B5\C4Ԫ\CBظ\F6\CA\FD,\B3\C6Ϊ\B4\AE\B5ĳ\A4\B6\C8 */
  return S.length;
}

Status ClearString(HString *S)
{ /* \BD\ABS\C7\E5Ϊ\BFմ\AE */
  if((*S).ch)
  {
    free((*S).ch);
    (*S).ch=NULL;
  }
  (*S).length=0;
  return OK;
}

Status SubString(HString *Sub, HString S,int pos,int len)
{ /* \D3\C3Sub\B7\B5\BBش\AES\B5ĵ\DApos\B8\F6\D7ַ\FB\C6𳤶\C8Ϊlen\B5\C4\D7Ӵ\AE\A1\A3 */
  /* \C6\E4\D6\D0,1\A1\DCpos\A1\DCStrLength(S)\C7\D20\A1\DClen\A1\DCStrLength(S)-pos+1 */
  int i;
  if(pos<1||pos>S.length||len<0||len>S.length-pos+1)
    return ERROR;
  if((*Sub).ch)
    free((*Sub).ch); /* \CAͷžɿռ\E4 */
  if(!len) /* \BF\D5\D7Ӵ\AE */
  {
    (*Sub).ch=NULL;
    (*Sub).length=0;
  }
  else
  { /* \CD\EA\D5\FB\D7Ӵ\AE */
    (*Sub).ch=(char*)malloc(len*sizeof(char));
    if(!(*Sub).ch)
      exit(OVERFLOW);
    for(i=0;i<=len-1;i++)
      (*Sub).ch[i]=S.ch[pos-1+i];
    (*Sub).length=len;
  }
  return OK;
}

void InitString(HString *T)
{ /* \B3\F5ʼ\BB\AF(\B2\FA\C9\FA\BFմ\AE)\D7ַ\FB\B4\AET\A1\A3\C1\ED\BC\D3 */
  (*T).length=0;
  (*T).ch=NULL;
}

int Index(HString S,HString T,int pos) 
{ /* TΪ\B7ǿմ\AE\A1\A3\C8\F4\D6\F7\B4\AES\D6е\DApos\B8\F6\D7ַ\FB֮\BA\F3\B4\E6\D4\DA\D3\EBT\CF\E0\B5ȵ\C4\D7Ӵ\AE, */
  /* \D4򷵻ص\DAһ\B8\F6\D5\E2\D1\F9\B5\C4\D7Ӵ\AE\D4\DAS\D6е\C4λ\D6\C3,\B7\F1\D4򷵻\D80 */
  int n,m,i;
  HString sub;
  InitString(&sub);
  if(pos>0)
  {
    n=StrLength(S);
    m=StrLength(T);
    i=pos;
    while(i<=n-m+1)
    {
      SubString(&sub,S,i,m);
      if(StrCompare(sub,T)!=0)
         ++i;
      else
         return i;
    }
  }
  return 0;
 }

Status StrInsert(HString *S,int pos,HString T)
{ /* 1\A1\DCpos\A1\DCStrLength(S)+1\A1\A3\D4ڴ\AES\B5ĵ\DApos\B8\F6\D7ַ\FB֮ǰ\B2\E5\C8봮T */
  int i;
  if(pos<1||pos>(*S).length+1) /* pos\B2\BB\BAϷ\A8 */
    return ERROR;
  if(T.length) /* T\B7ǿ\D5,\D4\F2\D6\D8\D0·\D6\C5\E4\BFռ\E4,\B2\E5\C8\EBT */
  {
    (*S).ch=(char*)realloc((*S).ch,((*S).length+T.length)*sizeof(char));
    if(!(*S).ch)
      exit(OVERFLOW);
    for(i=(*S).length-1;i>=pos-1;--i) /* Ϊ\B2\E5\C8\EBT\B6\F8\CCڳ\F6λ\D6\C3 */
      (*S).ch[i+T.length]=(*S).ch[i];
    for(i=0;i<T.length;i++)
      (*S).ch[pos-1+i]=T.ch[i]; /* \B2\E5\C8\EBT */
    (*S).length+=T.length;
  }
  return OK;
}

Status StrDelete(HString *S,int pos,int len)
{ /* \B4Ӵ\AES\D6\D0ɾ\B3\FD\B5\DApos\B8\F6\D7ַ\FB\C6𳤶\C8Ϊlen\B5\C4\D7Ӵ\AE */
  int i;
  if((*S).length<pos+len-1)
    exit(ERROR);
  for(i=pos-1;i<=(*S).length-len;i++)
    (*S).ch[i]=(*S).ch[i+len];
  (*S).length-=len;
  (*S).ch=(char*)realloc((*S).ch,(*S).length*sizeof(char));
  return OK;
}
void StrPrint(HString T)
{ /* \CA\E4\B3\F6T\D7ַ\FB\B4\AE\A1\A3\C1\ED\BC\D3 */
  int i;
  for(i=0;i<T.length;i++)
    printf("%c",T.ch[i]);
  printf("\n");
}
#define MAX_LEN 25 /* \CEļ\FE\D7\EE\B4\F3\D0\D0\CA\FD */
#define LINE_LEN 75 /* ÿ\D0\D0\D7ַ\FB\CA\FD\D7\EE\B4\F3ֵ+1 */
#define NAME_LEN 20 /* \CEļ\FE\C3\FB\D7\EE\B4󳤶\C8(\B0\FC\C0\A8\C5̷\FB\A1\A2·\BE\B6)+1 */

/* ȫ\BEֱ\E4\C1\BF */
HString T[MAX_LEN];
char str[LINE_LEN],filename[NAME_LEN]="";
FILE *fp;
int n=0; /* \CEļ\FE\D0\D0\CA\FD */

void Open()
{ /* \B4\F2\BF\AA\CEļ\FE(\D0»\F2\BE\C9) */
  int i;
  if(filename[0]) /* \CEļ\FE\D2Ѵ\F2\BF\AA */
    printf("\D2Ѵ\E6\D4ڴ򿪵\C4\CEļ\FE\n");
  else
  {
    printf("\C7\EB\CA\E4\C8\EB\CEļ\FE\C3\FB(\BFɰ\FC\C0\A8\C5̷\FB\A1\A2·\BE\B6\A3\AC\B2\BB\B3\AC\B9\FD%d\B8\F6\D7ַ\FB): ",NAME_LEN-1);
    scanf("%s%*c",filename);
    fp=fopen(filename,"r");
    if(fp) /* \D2Ѵ\E6\D4ڴ\CB\CEļ\FE */
    {
      do
      {
        fgets(str,LINE_LEN,fp);
        i=strlen(str);
        str[i-1]=0; /* \BD\AB10ǿ\D6Ƹ\C4Ϊ0 */
        i--;
        if(i>0)
        {
          StrAssign(&T[n],str);
          n++;
          if(n>MAX_LEN)
          {
            printf("\CEļ\FE̫\B4\F3\n");
            return;
          }
        }
      }while(i>0);
      fclose(fp);
    }
    else
      printf("\D0\C2\CEļ\FE\n");
  }
}

void List()
{ /* \CF\D4ʾ\CEļ\FE\C4\DA\C8\DD */
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d: ",i+1);
    StrPrint(T[i]);
  }
  getchar();
}

void Insert()
{ /* \B2\E5\C8\EB\D0\D0 */
  int i,l,m;
  printf("\D4ڵ\DAl\D0\D0ǰ\B2\E5m\D0\D0,\C7\EB\CA\E4\C8\EBl m: ");
  scanf("%d%d%*c",&l,&m);
  if(n+m>MAX_LEN)
  {
    printf("\B2\E5\C8\EB\D0\D0̫\B6\E0\n");
    return;
  }
  if(n>=l-1&&l>0)
  {
    for(i=n-1;i>=l-1;i--)
      T[i+m]=T[i];
    n+=m;
    printf("\C7\EB˳\D0\F2\CA\E4\C8\EB\B4\FD\B2\E5\C8\EB\C4\DA\C8\DD:\n");
    for(i=l-1;i<l-1+m;i++)
    {
      gets(str);
      InitString(&T[i]);
      StrAssign(&T[i],str);
    }
  }
  else
    printf("\D0г\AC\B3\F6\B7\B6Χ\n");
}

void Delete()
{ /* ɾ\B3\FD\D0\D0 */
  int i,l,m;
  printf("\B4ӵ\DAl\D0\D0\C6\F0ɾ\B3\FDm\D0\D0,\C7\EB\CA\E4\C8\EBl m: ");
  scanf("%d%d%*c",&l,&m);
  if(n>=l+m-1&&l>0)
  {
    for(i=l-1+m;i<n;i++)
      T[i-m]=T[i];
    for(i=n-m;i<n;i++)
      InitString(&T[i]);
    n-=m;
  }
  else
    printf("\D0г\AC\B3\F6\B7\B6Χ\n");
}

void Copy()
{ /* \BF\BD\B1\B4\D0\D0 */
  int i,l,m,k;
  printf("\B0ѵ\DAl\D0п\AAʼ\B5\C4m\D0в\E5\D4\DAԭk\D0\D0֮ǰ,\C7\EB\CA\E4\C8\EBl m k: ");
  scanf("%d%d%d%*c",&l,&m,&k);
  if(n+m>MAX_LEN)
  {
    printf("\BF\BD\B1\B4\D0\D0̫\B6\E0\n");
    return;
  }
  if(n>=k-1&&n>=l-1+m&&(k>=l+m||k<=l))
  {
    for(i=n-1;i>=k-1;i--)
      T[i+m]=T[i];
    n+=m;
    if(k<=l)
      l+=m;
    for(i=l-1;i<l-1+m;i++)
    {
      InitString(&T[i+k-l]);
      StrCopy(&T[i+k-l],T[i]);
    }
  }
  else
    printf("\D0г\AC\B3\F6\B7\B6Χ\n");
}

void Modify()
{ /* \D0޸\C4\D0\D0 */
  int i;
  printf("\C7\EB\CA\E4\C8\EB\B4\FD\D0޸ĵ\C4\D0к\C5: ");
  scanf("%d%*c",&i);
  if(i>0&&i<=n) /* \D0кźϷ\A8 */
  {
    printf("%d: ",i);
    StrPrint(T[i-1]);
    printf("\C7\EB\CA\E4\C8\EB\D0\C2\C4\DA\C8\DD: ");
    gets(str);
    StrAssign(&T[i-1],str);
  }
  else
    printf("\D0кų\AC\B3\F6\B7\B6Χ\n");
}

void Search()
{ /* \B2\E9\D5\D2\D7ַ\FB\B4\AE */
  int i,k,f=1; /* fΪ\BC\CC\D0\F8\B2\E9\D5ұ\EA־ */
  char b;
  HString s;
  printf("\C7\EB\CA\E4\C8\EB\B4\FD\B2\E9\D5ҵ\C4\D7ַ\FB\B4\AE: ");
  scanf("%s%*c",str);
  InitString(&s);
  StrAssign(&s,str);
  for(i=0;i<n&&f;i++) /* \D6\F0\D0в\E9\D5\D2 */
  {
    k=1; /* \D3\C9ÿ\D0е\DA1\B8\F6\D7ַ\FB\C6\F0\B2\E9\D5\D2 */
    while(k)
    {
      k=Index(T[i],s,k); /* \D3ɱ\BE\D0еĵ\DAk\B8\F6\D7ַ\FB\BF\AAʼ\B2\E9\D5\D2 */
      if(k) /* \D5ҵ\BD */
      {
        printf("\B5\DA%d\D0\D0: ",i+1);
        StrPrint(T[i]);
        printf("\B5\DA%d\B8\F6\D7ַ\FB\B4\A6\D5ҵ\BD\A1\A3\BC\CC\D0\F8\B2\E9\D5\D2\C2\F0(Y/N)? ",k);
        b=getchar();
        getchar();
        if(b!='Y'&&b!='y') /* \D6жϲ\E9\D5\D2 */
        {
          f=0;
          break;
        }
        else
          k++;
      }
    }
  }
  if(f)
    printf("û\D5ҵ\BD\n");
}

void Replace1()
{ /* \CC滻\D7ַ\FB\B4\AE */
  int i,k,f=1; /* fΪ\BC\CC\D0\F8\CC滻\B1\EA־ */
  char b;
  HString s,t;
  printf("\C7\EB\CA\E4\C8\EB\B4\FD\CC滻\B5\C4\D7ַ\FB\B4\AE: ");
  scanf("%s%*c",str);
  InitString(&s);
  StrAssign(&s,str);
  printf("\CC滻Ϊ: ");
  scanf("%s%*c",str);
  InitString(&t);
  StrAssign(&t,str);
  for(i=0;i<n&&f;i++) /* \D6\F0\D0в\E9\D5ҡ\A2\CC滻 */
  {
    k=1; /* \D3\C9ÿ\D0е\DA1\B8\F6\D7ַ\FB\C6\F0\B2\E9\D5\D2 */
    while(k)
    {
      k=Index(T[i],s,k); /* \D3ɱ\BE\D0еĵ\DAk\B8\F6\D7ַ\FB\BF\AAʼ\B2\E9\D5\D2 */
      if(k) /* \D5ҵ\BD */
      {
        printf("\B5\DA%d\D0\D0: ",i+1);
        StrPrint(T[i]);
        printf("\B5\DA%d\B8\F6\D7ַ\FB\B4\A6\D5ҵ\BD\A1\A3\CAǷ\F1\CC滻(Y/N)? ",k);
        b=getchar();
        getchar();
        if(b=='Y'||b=='y')
        {
          StrDelete(&T[i],k,StrLength(s));
          StrInsert(&T[i],k,t);
        }
        printf("\BC\CC\D0\F8\CC滻\C2\F0(Y/N)?");
        b=getchar();
        getchar();
        if(b!='Y'&&b!='y') /* \D6жϲ\E9\D5ҡ\A2\CC滻 */
        {
          f=0;
          break;
        }
        else
          k+=StrLength(t);
      }
    }
  }
  if(f)
    printf("û\D5ҵ\BD\n");
}

void Save()
{ /* \B4\E6\C5\CC */
  int i;
  getchar();
  fp=fopen(filename,"w");
  if(fp)
  {
    for(i=0;i<n;i++)
    {
      T[i].ch[T[i].length]=0;
      fputs(T[i].ch,fp);
      fputc(10,fp);
    }
    fputc(10,fp);
    fclose(fp);
  }
  else
    printf("\B4\E6\C5\CCʧ\B0\DC\n");
}

void main()
{
  Status s=TRUE;
  int i,k;
  for(i=0;i<MAX_LEN;i++) /* \B3\F5ʼ\BB\AF\B4\AE */
    InitString(&T[i]);
  while(s)
  {
    printf("\C7\EBѡ\D4\F1: 1.\B4\F2\BF\AA\CEļ\FE(\D0»\F2\BE\C9)  2.\CF\D4ʾ\CEļ\FE\C4\DA\C8\DD\n");
    printf("        3.\B2\E5\C8\EB\D0\D0  4.ɾ\B3\FD\D0\D0  5.\BF\BD\B1\B4\D0\D0  6.\D0޸\C4\D0\D0\n");
    printf("        7.\B2\E9\D5\D2\D7ַ\FB\B4\AE        8.\CC滻\D7ַ\FB\B4\AE\n");
    printf("        9.\B4\E6\C5\CC\CD˳\F6          0.\B7\C5\C6\FA\B1༭\n");
    scanf("%d",&k);
    switch(k)
    {
      case 1: Open();
              break;
      case 2: List();
              break;
      case 3: Insert();
              break;
      case 4: Delete();
              break;
      case 5: Copy();
              break;
      case 6: Modify();
              break;
      case 7: Search();
              break;
      case 8: Replace1();
              break;
      case 9: Save();
      case 0: s=FALSE;
    }
  }
}
