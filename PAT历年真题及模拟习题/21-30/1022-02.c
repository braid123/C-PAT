#include<stdio.h>
int main()
{
	int a[100000]={0};
	int n,num,grade;
	int max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&num,&grade);
		a[num]+=grade;
		if(a[num]>a[max])//ֱ�ӱȽϣ�������Խ�� 
		max=num;
	}
	printf("%d %d",max,a[max]);
	  return 0;
}

