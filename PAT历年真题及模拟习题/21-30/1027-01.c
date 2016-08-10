#include<stdio.h>
int main()
{	int G1,G2,S1,S2,K1,K2,price,money,temp;
    scanf("%d.%d.%d %d.%d.%d",&G1,&S1,&K1,&G2,&S2,&K2) ;
    price=G1*17*29+S1*29+K1;
    money=G2*17*29+S2*29+K2;
    if(money>=price)
    	temp=money-price;
    else
	{
	printf("-");
	temp=price-money;
	}
    	if(temp/(17*29)>0)
    		printf("%d.%d.%d",temp/(17*29),temp%(17*29)/29,temp%(17*29)%29);
		else if(temp/29>0)
			printf("0.%d.%d",temp/29,temp%29);
		else if(temp%29>0)
			printf("0.0.%d",temp);
	
    return 0;
}
