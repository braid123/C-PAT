#include<stdio.h>
#include<stdlib.h>
int m1,m2;
int a[4];
int f(int m){
    int i,j,*p,k;
     
    for(i=0;i<4;i++){
        a[i]=m%10;
        m=m/10;
    }
    for(j=0;j<3;j++){
        p=&a[0];
    for(i=0;i<3;i++){
        if(*p<*(p+1)){
            k=*p;
            *p=*(p+1);
            *(p+1)=k;
             
        }
        p++;
    }
    }
    m1=1000*a[0]+100*a[1]+10*a[2]+a[3];
    m2=1000*a[3]+100*a[2]+10*a[1]+a[0];
    m=m1-m2;
    return m;
}
int main()
{
    int N;
    scanf("%d",&N);
     
    while(N!=6174){
        N=f(N);
        if(N==0){
            printf("%d - %d = 0000",m1,m2);
            break;
        }
        else{
            printf("%d%d%d%d - %d%d%d%d = %d%d%d%d\n",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0],N/1000,(N/100)%10,(N/10)%10,N%10);
        }
    }
    return 0;
}
