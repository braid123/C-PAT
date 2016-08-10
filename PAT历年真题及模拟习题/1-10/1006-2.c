#include<stdio.h>
int main()
{
    char a[10],b[10],c,d;
    int i,z=0,x=0;
    scanf("%s %c %s %c",a,&c,b,&d);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==c)z=z*10+(c-'0');
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==d)x=x*10+(d-'0');
    }
    printf("%d",z+x);
}
