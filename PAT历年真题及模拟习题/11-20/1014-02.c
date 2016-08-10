#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i,t=0;
    char s[1000003],a;
    if ((a=getchar())=='-') printf("-");
    i=0;
    s[i]=getchar();
    getchar();
    while ((a=getchar())!='E')
    {
        s[++i]=a;
    }
    int num=i+1;
    if ((a=getchar())=='+')
    {
        while ((a=getchar())!='\n')
            t=t*10+a-'0';
        if (t>num-1)//
        {
            for (i=0;i<num;i++)
                printf("%c",s[i]);
            for (i=0;i<t-num+1;i++)
                printf("0");
         }
        else if(t<num-1)
        {
            for (i=0;i<t+1;i++)
                printf("%c",s[i]);
            printf(".");
            for (i=t+1;i<num;i++)
                printf("%c",s[i]);
        }
        else if (t==num-1)
        {
            for (i=0;i<t+1;i++)
                printf("%c",s[i]);
        }
    }
    else if (a=='-')
    {
        while ((a=getchar())!='\n')
            t=t*10+a-'0';
        if (t==0)
        {
            printf("%c.",s[0]);
            for (i=1;i<num;i++)
                printf("%c",s[i]);
        }
        else if (t>0){
            printf("0.");
            for (i=0;i<t-1;i++)
                printf("0");
            for (i=0;i<num;i++)
                printf("%c",s[i]);
        }
    }
}
