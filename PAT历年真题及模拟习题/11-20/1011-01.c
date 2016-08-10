#include "stdio.h"
#include "string.h"
int main()
{char a[1000];
    scanf("%s",a);
    int time[10]={0},i,num;
    num=strlen(a);
    for(i=0;i<num;i++)
    {   if(a[i]=='0')
        time[0]++;
        if(a[i]=='1')
            time[1]++;
        if(a[i]=='2')
            time[2]++;
        if(a[i]=='3')
            time[3]++;
        if(a[i]=='4')
            time[4]++;
        if(a[i]=='5')
            time[5]++;
        if(a[i]=='6')
            time[6]++;
        if(a[i]=='7')
            time[7]++;
        if(a[i]=='8')
            time[8]++;
        if(a[i]=='9')
            time[9]++;
         
     
    }
    for(i=0;i<10;i++)
    {if(time[i]!=0)
        printf("%d:%d\n",i,time[i]);
     
    }
    return 0;
     
 
}
