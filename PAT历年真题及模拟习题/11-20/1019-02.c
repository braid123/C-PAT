#include<stdio.h>
#include<string.h>
int main(){
    char a[80],b[80];
    char *p,*q;
    char x[80];
    int i=0;
    int j,flag;
    scanf("%s%s",a,b);
     
    p=&a[0];
    q=&b[0];
    while((*p)!='\0'){
        if(*p==*q){
            p++;
            q++;
        }
        else{ 
            if(*p<='z'&&*p>='a') x[i]=*p-'a'+'A';
            else x[i]=*p;
            i++;
            p++;
        }
    }
    x[i]='\0';
    for(i=0;x[i]!='\0';i++){
        flag=1;
        for(j=0;j<i;j++){
            if(x[i]==x[j]) flag=0;//ШЅжи 
        }
        if(flag) printf("%c",x[i]);
    }
 
    return 0;
}
