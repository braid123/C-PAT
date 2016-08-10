#include<stdio.h>
int main()
{
	int N,M,i,j,a[100000],b[100000];
	int c[100000]={0};
	
    scanf("%d",&N);
    for(i=0;i<N;i++)
    	scanf("%d",&a[i]);
	scanf("%d",&M);
	for(j=0;j<M;j++)
    	scanf("%d",&b[j]);
    
	for(j=0;j<M;j++)	
    {for(i=0;i<N;i++)
    	if(b[j]==a[i])
    		c[j]++;	
		}	
		
	  for(j=0;j<M;j++)
    	printf("%d",&c[j]);
	
    return 0;
}
