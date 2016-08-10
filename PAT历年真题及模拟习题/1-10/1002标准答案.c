#include <stdio.h>
int main()
{
 int i = 0,n  =0, a1=0, a2=0, a2_count = 0, a3 = 0, a4_count = 0, a5 = 0;
 float a4 = 0.0;
 scanf("%d", &n);
 while (0<n<=1000 && i < n) {
  int num = 0;
  scanf("%d", &num);
  if (0 == num%5 && 0 == num%2) {
   a1 += num;
  }
  if (num % 5 == 1) {
   a2_count++;
   if (a2_count%2) {
    a2 += num;
   }
   else {
    a2 -= num;
   }
  }
  if (num % 5 == 2) {
   a3++;
  }
  if (num % 5 == 3) {
   a4_count++;
   a4 += num;
  }
  if (num % 5 == 4) {
   if (a5 < num) {
    a5 = num;   
   }
  }
  i++;
 }
 a4 = a4/a4_count;
 if (a1) {
  printf("%d ",a1);  
 }
 else {
  printf("N "); 
 }
 if (a2_count) {
  printf("%d ",a2);  
 }
 else {
  printf("N "); 
 }
 if (a3) {
  printf("%d ",a3);  
 }
 else {
  printf("N "); 
 }
 if (a4_count) {
  printf("%.1f ",a4);  
 }
 else {
  printf("N "); 
 }
 if (a5) {
  printf("%d\n",a5);  
 }
 else {
  printf("N\n"); 
 }
 return 0;
}
