#include <stdio.h>
int fun1(long int num,int dig)
{  int count=0;
	while (num!=0)
	{
	if(num%10==dig)
	{ 
		count++;
		num=num/10;	
}
	else num=num/10;
	}
	return count;
}
long int fun2(int base,int L)
	{	int i=0;
		int sum;
		if(L==0)
		sum=0;
		while(i<L&&L!=0){
			sum+=base;
			base=base*10;
			i++;
		}
		return sum;
}
int main(){
	int DA,DB,L1,L2; 
    long int A,B,PA,PB;
	scanf("%d %d %d %d",&A,&DA,&B,&DB);
	
	L1=fun1(A,DA);
	L2=fun1(B,DB);
	PA=fun2(DA,L1);
	PB=fun2(DB,L2);

	printf("%d",PB+PA);
    return 0;
}
