#include <stdio.h>
#include<stdlib.h>
//不明原因，编译错误 ！！！！！ 
int cai(char jia1[],char yi1[])
{    int jia2[105],yi2[105],N,i;
	for(i=0;i<N;i++)
    {jia2[i]=jia1[i]-'A';
    yi2[i]=yi1[i]-'A';
	}
	return yi2[i]-jia2[i];	
}
int count(char c){
	int bc,cc,jc;
	cc=bc=jc=0;
	switch(c){
		case 'B': bc++;break;
		case 'C': cc++;break;
		case 'J': jc++;break;	
	}
}
void max(bc,cc,jc)
{
	if((bc>=cc&&bc>=jc)||bc==jc||bc==cc) 
	  printf("B");
	if(cc>bc&&cc<jc)
	  printf("J");
	if((cc>bc&&cc>jc)||cc==jc)
     printf("C"); 
}
int main(){
	int N,bc,cc,jc,result,sum1,sum2,i;
	int jiawin,jiaping,jialose;
	jiawin=jiaping=jialose=0; 
  scanf("%d\n",&N);
  char jia1[105],yi1[105];
  while(i<N){
  	scanf("%c %c\n",&jia1,&yi1);
  	result=cai(jia1,yi1);
  	if(result>0)
  	{	jiawin++;
  		sum1=count(jia1[i]);
		  }	
  	else if(result==0)
  		jiaping++;
  	else
  	{jialose++;
  		sum2=count(yi1[i]);	  }	
	  i++;	
  } 
  printf("%d %d %d\n",sum1,N-sum1-sum2,sum2);
	printf("%d %d %d\n",sum2,N-sum1-sum2,sum1);
  max(bc,cc,jc);
    return 0;
}
