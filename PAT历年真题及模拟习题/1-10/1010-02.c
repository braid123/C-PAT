#include<stdio.h>
struct cake{
    int n;
    int m;
    double price;
};
int main(){
    int i,j,N,D;
    double sum;
    scanf("%d %d",&N,&D);
    struct cake c[N],temp;
    for(i=0;i<N;i++){
        scanf("%d",&c[i].n);
    }
    for(i=0;i<N;i++){
        scanf("%d",&c[i].m);
    }
    for(i=0;i<N;i++){
        c[i].price=c[i].m*1.00/c[i].n;
    }
    for(i=1;i<N;i++){
        for(j=0;j<N-1;j++){
            if(c[j].price<c[j+1].price){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    i=0;
    sum=0;
    while(D>c[i].n){
        sum=sum+c[i].m;
        D=D-c[i].n;
        i++;
    }
    sum=sum+c[i].price*D;
    printf("%.2f",sum);
    return 0;
}
