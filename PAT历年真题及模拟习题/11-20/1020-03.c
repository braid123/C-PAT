#include<stdio.h>
#include<stdlib.h>
/*void paixu(int *arr,int n)
{
    int i,j,t;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
}*/
int comp(const void*a,const void *b)
{
    int *p1=(int *)a;
    int *p2=(int *)b;
    return *p1-*p2;
}
int main()
{
    int n,i,p,max=1,j;
    int k;
    int num[100000];
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    qsort(num,n,sizeof(int),comp);
    //paixu(num,n);
    for(i=0;i<n;i++)
    {
        for(j=i+max-1;j<n;j++)
        {
            if(num[i]*p<num[j])
                break;
            if(j-i+1>max)
                max =j-i+1;
        }
    }
         
    printf("%d\n",max);
     
}
