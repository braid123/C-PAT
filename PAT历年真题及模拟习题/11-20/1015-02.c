#include<stdio.h>
 
int main()
{
    int head,n,k;
    scanf("%d%d%d",&head,&n,&k);
     
    int i=0;
    int a[100000][2],b[n][3];
    int x,y,z;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        a[x][0]=y;
        a[x][1]=z;
    }
     
    int add=head;
    int j=0;
    int count=0;
    while(add!=-1){
        b[j][0]=add;                   
        b[j][1]=a[add][0];                 
        b[j][2]=a[add][1];                     
        j++;                               
        add=a[add][1];
        count++;
    }
     
    int p=0;
    if(k<=count)head=b[k-1][0];
    for(j=1;k*j<=count;j++){
        i=0;
        p=k*j-k;
        if(k*j+k<=count)b[p][2]=b[p+2*k-1][0];
        else {b[p][2]=b[p+k-1][2];}
        for(i=0;i<k-1;i++){
            b[p+k-i-1][2]=b[p+k-i-2][0];
        }
    }
     
    for(i=0;i<count;i++){
        a[b[i][0]][0]=b[i][1];
        a[b[i][0]][1]=b[i][2];
    }
     
    add=head;
    while(add!=-1){
        if(a[add][1]==-1)printf("%05d %d -1\n",add,a[add][0]);                                         
        else {  printf("%05d %d %05d\n",add,a[add][0],a[add][1]);                                          
            }                                  
        add=a[add][1];
    }
     
    return 0;
     
}
