#include <stdio.h>
#include <string.h>
int main()
{char a[1000],c[1000];
    scanf("%s",a);
   int b,i,length,tap1=0,tap2=0;
    scanf("%d",&b);
    length=strlen(a);
 
    for(i=0;i<length;i++)
    {tap1=tap2*10+a[i]-'0';//������ת��Ϊ���� 
         
        c[i]=tap1/b+'0';//���� 
         
        tap2=tap1%b;//���� 
         
    }//��������һλС�ڳ�����ʱ�򵥶��г����������һλ������0
     if(c[0]=='0')
        printf("%s %d",c+1,tap2);
    else
        printf("%s %d",c,tap2);
 
 
    return 0;
 
}
