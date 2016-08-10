#include<stdio.h>
 
int main(){
    int M,N;
    char s,ch;
    scanf("%d%c%c",&N,&ch,&s);
     
    int i,j;
    M=int(N*1.00/2+0.5);
    char a[M][N];
     
    for(j=0;j<N;j++){
        a[0][j]=s;
        a[M-1][j]=s;
    }
    for(i=1;i<M-1;i++){
        a[i][0]=s;
        for(j=1;j<N-1;j++) a[i][j]=' ';
        a[i][N-1]=s;
    }
    for(i=0;i<M;i++)
    {for(j=0;j<N;j++)printf("%c",a[i][j]);
    printf("\n");}
    return 0;
}
