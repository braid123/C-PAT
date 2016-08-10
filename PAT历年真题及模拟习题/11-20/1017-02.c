#include<stdio.h>
#include<math.h>
int main()
{
int a[23];
int b,d,i,j,N;
char c;
char H[1000][1000];
for(i=0;i<1000;i++)
for(j=0;j<1000;j++)
H[i][j]=' ';
scanf("%d %c",&N,&c);
b=int(sqrt((N+1)/2.0));
d=N-2*b*b+1;
for(i=0;i<23;i++)
a[i]=0;
for(i=0;i<2*b-1;i++)
    for(j=i;j<2*b-1-i;j++)
        H[i][j]=c;
for(i=b;i<2*b-1;i++)
    for(j=2*b-2-i;j<i+1;j++)
        H[i][j]=c;
for(i=0;i<b;i++)
{
    for(j=0;j<2*b-1-i;j++)
    {
        printf("%c",H[i][j]);
    }
    printf("\n");
}
for(i=b;i<2*b-1;i++)
{
    for(j=0;j<i+1;j++)
    {
        printf("%c",H[i][j]);
    }
    printf("\n");
}
    printf("%d\n",d);
return 0;
}
