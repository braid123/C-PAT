#include <stdio.h>
int main()
{
    int num,i=0;
    int a1,a2,a3,a5;
    double a4=0.0;
    int count=0;
    int n,a[1000],flag=1;
    scanf("%d ",&n);
    a1=a2=a3=a5=0;
    
    while(i<n)
	{
    	scanf(" %d",&a[i]);
    	if(a[i]%5==0&&a[i]%2==0)
    	a1+=a[i];
    	if(a[i]%5==1)
    	{a2=a2+a[i]*flag;
    	flag=-flag;
		}
		if(a[i]%5==2)
    	a3++;
    	if(a[i]%5==3)
    	{count++;
		a4+=a[i];
		}
		if(a[i]%5==4)
    	{if(a5<a[i])
    	   a5=a[i];
		}
	i++;	
	}
	
	a4=1.0*a4/count;

	if (a1) {
	  printf("%d ",a1);  
	 }
	else {
	  printf("N "); 
	 }
	if (a2) {
	  printf("%d ",a2);  
	 }
	else {
	  printf("N "); 
	 }
	if(a3) {
	  printf("%d ",a3);  
	 }
	 else {
	  printf("N "); 
	 }
	 if (count) {//注意存在条件的判断！！！！！ 
	  printf("%.1f ",a4);  
	 }
	 else {
	  printf("N "); 
	 }
	 if (a5) {
	  printf("%d\n",a5);  
	 }
	 else {
	  printf("N\n"); 
	 }
    return 0;
}
