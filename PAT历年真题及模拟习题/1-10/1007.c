#include<stdio.h>
#include <string.h> 

int main()
{	int B,Q,R,i;
	char s[1001];
	long int A;
	scanf("%s %d",&s,&B);
	for(i=0;s[i]='\0';i++) 
		A=A*10+s[i]-'0';
	 if(A%B==0)
	 {	R=0;
	 printf("%d %d",A/B,R);
	 }	 
	 else{
	 int count;
	 for(count=1;count<B;count++){
     	if(A%B==count)
     	R=count;
	 } 
	 printf("%d %d",A/B,R);
	 }    
    return 0;
}
