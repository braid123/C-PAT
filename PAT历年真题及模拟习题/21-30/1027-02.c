#include"stdio.h"
int main()
{
   int p1=0,p2=0,p3=0; 
    int a1=0,a2=0,a3=0; 
    int qp=0,qa=0; 
    scanf("%d.%d.%d %d.%d.%d",&p1,&p2,&p3,&a1,&a2,&a3);
     
    qp=p1*17*29+p2*29+p3; 
    qa=a1*17*29+a2*29+a3; 
   
    int re=qa-qp,r1=0,r2=0,r3=0; 
   
    if(qa==qp) 
    { 
        printf("0.0.0\n"); 
    } 
    else if(qa<qp) 
    { 
        printf("-"); 
        re=-re; 
    } 
    r1=re/(17*29); 
    r2=(re-r1*17*29)/29; 
    r3=re-r1*17*29-r2*29; 
    printf("%d.%d.%d",r1,r2,r3); 
   
    return 0; 
}
