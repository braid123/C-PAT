#include<stdio.h>
#define CLK_TCK 100

int main()
{
    long int C1,C2,time;
    scanf("%d%d",&C1,&C2);
    time=(C2-C1)*1.0/CLK_TCK;
    int hh,mm,ss;
    hh=time/3600;
    time=time%3600;
    mm=time/60;
    ss=time%60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
