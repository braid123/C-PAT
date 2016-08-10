#include<stdio.h>
int main()
{
    int i=0,j,k=0,m,b,c=0,n=1;
    char s[100],a[100],d[100];
    gets(s);
	while(s[i]!='E'&&s[i]!='e')
{
    i++;
    if(s[i]!='.'&&s[i]!='E'&&s[i]!='e')
    a[k++]=s[i];
}
for(b=i+2;s[b];b++)
d[c++]=s[b];
n=d[0]-'0';
for(b=1;b<c;b++)
n=n*10+(d[b]-'0');
 
if(s[i+1]=='-')
{
    if(s[0]=='+')
    printf("0.");
    if(s[0]=='-')
printf("-0.");
    for(j=0;j<n-1;j++)
    printf("0");
    for(j=0;j<k;j++)
        printf("%c",a[j]);
     
   }
if(s[i+1]=='+')
{
    if(s[0]=='+')
        printf("%c",s[1]);
    if(s[0]=='-')
        printf("-%c",s[1]);
    if(n<k)
    {for(j=1;j<=n;j++)
        printf("%c",a[j]);
    printf(".");
    for(j=n+1;j<k;j++)
        printf("%c",a[j]);}
     else
     {  m=n-k+1;
       for(j=1;j<k;j++)
           printf("%c",a[j]);
       for(i=0;i<m;i++)
           printf("0");
     }
 
}
    return 0;
}
