#include <stdio.h>
#include <string.h>
int main()
{char a[1000],c[1000];
    scanf("%s",a);
   int b,i,length,tap1=0,tap2=0;
    scanf("%d",&b);
    length=strlen(a);
 
    for(i=0;i<length;i++)
    {tap1=tap2*10+a[i]-'0';//将数组转化为数字 
         
        c[i]=tap1/b+'0';//存商 
         
        tap2=tap1%b;//求余 
         
    }//被除数第一位小于除数的时候单独列出来，结果第一位不能是0
     if(c[0]=='0')
        printf("%s %d",c+1,tap2);
    else
        printf("%s %d",c,tap2);
 
 
    return 0;
 
}
