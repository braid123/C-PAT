#include<stdio.h>
int main(){
    int N;
    char ch;
    scanf("%d %c",&N,&ch);
    int row=(N+1)/2;
    for(int i=0;i<row;i++){
    if(i==0||i==row-1){     
        for(int j=0;j<N;j++){
            printf("%c",ch);
            }
    }  
    else{
         for(int j=0;j<N;j++){
            if(j==0||j==N-1)
            printf("%c",ch);
            else
            printf(" ");
           }
    }
        printf("\n");
    }  
    return 0;
}
