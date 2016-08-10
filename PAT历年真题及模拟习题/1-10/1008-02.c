#include <stdio.h>
int C1=0,J1=0,B1=0,C2=0,J2=0,B2=0;
void acc(char a,int s)
 {     if(s==0)
    {         if(a=='C') C1++;
     if(a=='J') J1++;
    if(a=='B') B1++;
 }
      else
    {
        if(a=='C') C2++;
   if(a=='J') J2++;
   if(a=='B') B2++;
 }
 }
int main()
  {
   int n;
   scanf("%d",&n);
   char a[n],b[n];
  int jia=0,yi=0,ping=0;
   int i;
   for(i=0;i<n;i++)
    {
        getchar();
    scanf("%c %c",&a[i],&b[i]);
   // printf("%c",a[i]);
    if(a[i]==b[i]) ping++;
   else if(a[i]=='C'&&b[i]=='J'||a[i]=='J'&&b[i]=='B'||a[i]=='B'&&b[i]=='C') {jia++;acc(a[i],0);}
    else {yi++;acc(b[i],1);}
      }
     printf("%d %d %d\n",jia,ping,yi);
   printf("%d %d %d\n",yi,ping,jia);
  if(B1>=C1&&B1>=J1) printf("B ");
  if(C1>B1&&C1>=J1) printf("C ");
  if(J1>C1&&J1>B1) printf("J ");
  if(B2>=C2&&B2>=J2) printf("B");
  if(C2>B2&&C2>=J2) printf("C");
  if(J2>C2&&J2>B2) printf("J");
  return 0;
}
