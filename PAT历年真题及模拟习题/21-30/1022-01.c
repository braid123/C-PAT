#include<stdio.h>
int main()
{
    int i,temp,num,max=0,N,grade; 
    long int sum[200000];//注意容易越界 
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    	scanf("%d %d\n",&num,&grade);
    	sum[num]+=grade;
	}
	for(i=1;i<=num;i++){
		if(sum[i]>max)
		{	max=sum[i];
			temp=i;
		}
	}
	printf("%d %d",temp,max);
    return 0;
}
