#include<stdio.h>
int main()
{
    char pat[100001];
    scanf("%s",pat);   
    int l=0;
    int counta=0;    
    for(l=0;pat[l]!='\0';l++)
        if(pat[l]=='A')counta++;
    int len=l;
    int a1[counta],a2[counta];
    int count=0;
    int i=0,j=0;
    for(l=0;pat[l]!='\0';l++){
        if(pat[l]=='P')count++;
        if(pat[l]=='A'){
            a1[i]=count;
            i++;
        }
    }
    count=0;
    for(l=len-1;l>=0;l--){
        if(pat[l]=='T')count++;
        if(pat[l]=='A'){
            a2[j]=count;
            j++;
        }
    }
    long long c=0;
    for(l=0;l<counta;l++){
        c=c+a1[l]*a2[counta-l-1];
    }
    printf("%d",c%1000000007);
    return 0;
}
