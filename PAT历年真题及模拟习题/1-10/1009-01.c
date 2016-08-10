#include <stdio.h>//编译超时 
void dijian(int dj[])//输出递减数列的数字 
{
	int i,number1=0,max,j,t;
	for(i=0;i<4;i++){
		max=i;
		for(j=1;j<3;j++){
			if(dj[i]<dj[j])
			t=dj[i];
			dj[i]=dj[j];
			dj[j]=t;
		}
	}
}
int main()
  {
   int num,n[4],i=0,temp;
   scanf("%d",num);
   temp=num;
   while(temp!=6174)
	{n[i]=temp%10;
	 temp=temp/10;
	 dijian(n);
	if(n[0]==n[1]&&n[2]==n[3]&&n[0]==n[2]&&n[0]&&n[3]&&n[1]==n[2]&&n[1]==n[3])
	{printf("%d%d%d%d-%d%d%d%d=0000\n",n[0],n[1],n[2],n[3],n[3],n[2],n[1],n[0]);
		break;
		}	
	else
 	printf("%d%d%d%d - %d%d%d%d = %d%d%d%d\n",n[0],n[1],n[2],n[3],n[3],n[2],n[1],n[0],num/1000,(num/100)%10,(num/10)%10,num%10);
	temp=n[0]*1000+n[1]*100+n[2]*10+n[3]-n[0]-n[1]*10-n[2]*100-n[3]*1000;
	}
	
  return 0;
}
