#include<stdio.h>
int main(){
    int a[10],b[50];
    int i,j,count,sum;
    j=sum=0;
    int temp;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        count=a[i];
        sum=sum+a[i];
        while(count>0){
            b[j]=i;
            j++;
            count--;
        }
    }
    for(i=0;i<sum-1;i++){
        for(j=0;j<sum-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    j=0;
    while(b[j]==0) j++;
    temp=b[j];
    b[j]=b[0];
    b[0]=temp;
    for(j=0;j<sum;j++) printf("%d",b[j]);
    return 0;
}
