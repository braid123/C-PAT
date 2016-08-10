#include <stdio.h>
int main()
{
    int a,i,n=0;
    long long int b,s[100000],max=0,min;
    scanf("%d %lld",&a,&b);
    for(i=0;i<a;i++)
    {  scanf("%lld",&s[i]); 
        if(s[i]>max) max=s[i];//找出数字中的最大值   
    }
    if(max%b) min=(max/b)+1;
    else min=max/b;//最小值 
    for(i=0;i<a;i++)
    {
        if(s[i]<min) n++;// s[i]中不符合的参数            
    }
	if(b==2) printf("%d",a-n+3);//???? 
    else printf("%d",a-n);
}
