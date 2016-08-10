#include<stdio.h>
#include<string.h>
 
int main(){
    char a[1000],b[1000];
    int i,j,flag,item;
     
    scanf("%s%s",a,b);
    for(j=0;b[j]!='\0';j++){
        for(i=0;a[i]!='\0';i++){
            if(a[i]==b[j]){
            b[j]='*';
            a[i]=b[j]; 
            break;
            }
        }      
    }
    flag=item=0;
    for(j=0;b[j]!='\0';j++){
        if(b[j]!='*') flag++;
    }
    for(i=0;a[i]!='\0';i++){
        if(a[i]!='*') item++;
    }
    if(flag==0) printf("Yes %d",item);
    else printf("No %d",flag);
    return 0;
}
