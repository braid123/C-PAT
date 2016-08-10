#include<stdio.h>
int fun(char a,char b)
{
    if(a>='a'&&a<='z'&&a-32==b)
       return 1;
    if(a>='A'&&a<='Z'&&a+32==b)
       return 1;
    return 0;
}
int main()
{
 
    int i,n=1,k=0;
    char a[100000],b[100000],*p;
    gets(a);
    gets(b);
    p = b;
    while(*p!='\0')
    {
        for(i=0;a[i]!='\0';i++)
             if(a[i]==*p||fun(a[i],*p))//a,bÒ»Ñù
			 	{n=0;break;}
        for(i=0;a[i]!='\0';i++)
             if(a[i]=='+')
			 	k=1;
        if(k&&*p>='A'&&*p<='Z')
		   	n=0;
        if(n) 
		   	printf("%c",*p);
        p++;
		n=1;
		k=0;
    }
 
    return 0;
         
}
