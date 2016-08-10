#include<stdio.h>
 
typedef struct{
  int xuehao;
  int de;
  int cai;
  int zongfen;
}Student;//学生结构体
 
int compare(Student a,Student b)//a<b flag =1
{
  int flag=0;
  if(a.zongfen<b.zongfen)
  {
    flag=1;
  } else
  if(a.zongfen==b.zongfen)
  {
    if(a.de<b.de)
    {
      flag=1;
    }else if(a.de==b.de)
    {
      if(a.xuehao>b.xuehao)
      {
        flag=1;
      }
    }
  }
  return flag;
}
 
void swap(Student *a, Student *b)
{
  Student temp = *a;
  *a = *b;
  *b = temp;
}
 
void sort(int high, int low, Student st[])
{
  Student pivot=st[low];
  int left=low, right=high;
  if(low>=high)
  return;
  swap(&st[low],&st[high]);
  while(1)
  {
    while((low<high)&&!compare(pivot,st[low]))
     ++low;
    while((low<high)&&!compare(st[high],pivot))
     --high;
    if(low<high)
    {
      swap(&st[low],&st[high]);
    } else
    break;
  }
  swap(&st[low],&st[right]);
  sort(low-1,left,st);
  sort(right,low+1,st);
 
}
 
int main()
{
  int num,base,prebase,i,j;
  scanf("%d %d %d",&num,&base,&prebase);
  int cnt=num;
  Student st[num],st1[num],st2[num],st3[num],st4[num];
  int st1cnt=0,st2cnt=0,st3cnt=0,st4cnt=0;
  for(i=0;i<num;++i)
  {
    scanf("%d %d %d",&st[i].xuehao,&st[i].de,&st[i].cai);
    st[i].zongfen=st[i].de+st[i].cai;
    if(st[i].cai<base||st[i].de<base)
    {
      --cnt;
    }else
    if(st[i].cai>=prebase&&st[i].de>=prebase)
    {
      st1[st1cnt]=st[i];
      ++st1cnt;
    }else
    if(st[i].de>=prebase)
    {
      st2[st2cnt]=st[i];
      ++st2cnt;
    }else
    if(st[i].de>=st[i].cai)
    {
      st3[st3cnt]=st[i];
      ++st3cnt;
    }else
    {
      st4[st4cnt]=st[i];
      ++st4cnt;
    }
  }
  printf("%d\n",cnt);
  if(st1cnt)
  {
    sort(st1cnt-1,0,st1);
    for(i=st1cnt-1;i>=0;--i)
    {
      printf("%d %d %d\n",st1[i].xuehao,st1[i].de,st1[i].cai);
    }
  }
  if(st2cnt)
  {
    sort(st2cnt-1,0,st2);
    for(i=st2cnt-1;i>=0;--i)
    {
      printf("%d %d %d\n",st2[i].xuehao,st2[i].de,st2[i].cai);
    }
  }
  if(st3cnt)
  {
    sort(st3cnt-1,0,st3);
    for(i=st3cnt-1;i>=0;--i)
    {
      printf("%d %d %d\n",st3[i].xuehao,st3[i].de,st3[i].cai);
    }
  }
  if(st4cnt)
  {
    sort(st4cnt-1,0,st4);
    for(i=st4cnt-1;i>=0;--i)
    {
      printf("%d %d %d\n",st4[i].xuehao,st4[i].de,st4[i].cai);
    }
  }
  return 0;
}
