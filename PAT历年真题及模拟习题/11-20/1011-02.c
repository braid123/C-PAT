#include<stdio.h>
#include<string.h>
int main(){
    int a[10]={0,0,0,0,0,0,0,0,0,0};
   char s[1000];
    int i,k;
    i=0;
    scanf("%s",s);
     
    for(i=0;i<strlen(s);i++){
        k=s[i]-'0';
        a[k]++;
    }
    for(i=0;i<10;i++){
        if(a[i]!=0) printf("%d:%d\n",i,a[i]);
    }
    return 0;
}
