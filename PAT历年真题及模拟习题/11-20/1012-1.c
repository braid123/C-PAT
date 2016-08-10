#include<stdio.h>

int main()
{
    int i,D,num[32];
    unsigned int A,B,C; 
	scanf("%d%d%d",&A,&B,&D);
	C=A+B;
	i=0;
	while(C>0)
	{
		num[i]=C%D;
		i++;
		C=C/D;
	} 
	i--;
	do{
        printf("%d",num[i]);
        i=i-1;
    }while(i>=0);
    return 0;
}
