#include<stdio.h>
int main (void)
{
    int a,b,c,d;
    int i;
    int result[32];
    for (i=0;i<32;i++)
        result[i]=0;
/*直接用变量输出结果会导致溢出，所以用数组*/
    scanf("%d %d %d",&a,&b,&d);
    c=a+b;  
    i=0;
    do{
        result[i]=c%d;
        c=c/d;
        i=i+1;
    }while (c!=0);
     
    i=i-1;
    do{
        printf("%d",result[i]);
        i=i-1;
    }while(i>=0);
 
    return 0;
     
}
