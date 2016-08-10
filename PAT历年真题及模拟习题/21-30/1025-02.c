#include<stdio.h>
#include<stdlib.h>
 
int merge(int sr[],int tr[],int i,int m,int n)
{
    int j,k,l;
    for(j=m+1,k=i;i<=m&&j<=n;k++){
        if(sr[i]<sr[j])
            tr[k]=sr[i++];
        else
            tr[k]=sr[j++];
    }
    if(i<=m)
    {
        for(l=0;l<=m-i;l++)
            tr[k+l]=sr[i+l];
    }
    if(j<=n){
        for(l=0;l<=n-j;l++)
            tr[k+l]=sr[j+l];
    }
    return 0;      
}
 
int mergepass(int sr[],int tr[],int s,int n)
{
    int i=1;
    int j;
    while(i<=n-2*s+1){
        merge(sr,tr,i,i+s-1,i+2*s-1);
        i=i+2*s;
    }
    if(i<n-s+1)
        merge(sr,tr,i,i+s-1,n);
    else{
        for(j=i;j<=n;j++)tr[j]=sr[j];
    }
     
    return 0;
}
 
int main()
{
    int n;
    scanf("%d",&n);
     
    int a[n+1];
    int b[n+1];
    int c[n+1];
    int d[n+1];
    int i,j;
    int flag1=0;
    int insert=0;
     
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        d[i]=a[i];
    }
    for(i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
     
    for(i=2;i<=n;i++){
        flag1=0;
        if(a[i]<a[i-1]){
            a[0]=a[i];
            for(j=i-1;a[0]<a[j];j--){
                a[j+1]=a[j];
            }
            a[j+1]=a[0];
        }
        for(j=1;j<=n;j++){
            if(a[j]!=b[j])flag1=1;
        }
        if(flag1==0){
            insert=1;
            continue;
        }
        if(insert==1){
            for(j=1;j<=n;j++)c[j]=a[j];
            break;
        }
    }  
    if(insert==1){
        printf("Insertion Sort\n");
        for(j=1;j<n;j++)printf("%d ",c[j]);
        printf("%d",c[j]);
    }
 
    int flag2=0;
    int merges=0;
    int tr[n+1];
    int k=1;
    while(k<n){
        mergepass(d,tr,k,n);
        if(merges==1){
            for(j=1;j<=n;j++)c[j]=tr[j];
            break;
        }
        k=2*k;
        flag2=0;
        for(j=1;j<=n;j++){
            if(tr[j]!=b[j])flag2=1;
        }
        if(flag2==0){
            merges=1;
        } 
        mergepass(tr,d,k,n);
        if(merges==1){
            for(j=1;j<=n;j++)c[j]=d[j];
            break;
        }
        flag2=0;
        for(j=1;j<=n;j++){
            if(d[j]!=b[j])flag2=1;
        }
        if(flag2==0){
            merges=1;
        }
        k=2*k;
    }
    if(merges==1){
        printf("Merge Sort\n");
        for(j=1;j<n;j++)printf("%d ",c[j]);
        printf("%d",c[j]);
    }      
    return 0;          
}
