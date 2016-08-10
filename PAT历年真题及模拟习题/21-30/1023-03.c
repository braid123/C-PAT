#include<stdio.h>
#include<string.h>
 
int main(){
    char s1[100001],s2[100001];
    gets(s1);
    gets(s2);
    int i,flag=0;
    for(i=0;s1[i]!='\0';++i){
        if(s1[i]=='+') {
            flag=1;
        }
    }
    if(flag){
        for(i=0;s2[i]!='\0';++i){
            if(s2[i]>='A'&&s2[i]<='Z'){
                s2[i]=' ';
            }
        }
    }
    for(i=0;s1[i]!='\0';++i){
        char *p=strchr(s2,s1[i]);
        while(p){
            *p = ' ';
            p = strchr(s2,s1[i]);
        }
        if(s1[i]>='A'&&s1[i]<='Z'){
            char ch=s1[i]-'A'+'a';
            p=strchr(s2,ch);
            while(p){
                *p = ' ';
                p = strchr(s2,ch);
            }
        }
    }
    flag=1;
    for(i=0;s2[i]!='\0';++i){
        if(s2[i]!=' '){
            printf("%c",s2[i]);
            flag=0;
        }
    }
    if(flag) printf("\n");
    return 0;
}
