#include <stdio.h>
int main()
  {int i,kinds,D,price[1000],weigh[1000];
  double sum,dj[1000];
   scanf("%d%d\n",&D,&kinds);
    for(i=0;i<D;i++)
   	scanf("%d",&weigh[i]);
	for(i=0;i<D;i++)
  	scanf("%d",&price[i]);
   for(i=0;i<D;i++)
    dj[i]=1.0*price[i]/weigh[i];
    while(D){ 
    int temp=0;
   for(i=0;i<D;i++)
   		if(dj[i]<dj[temp])
   			i=temp;
   if(weigh[i]<D)
   {
            sum += price[i];
            dj[i] = 0;
            D-= weigh[i];
        }
    else
	{
        sum += D*dj[temp];
        break; 
        }
   } 
   printf("%.2lf\n", sum);
  return 0;
}
