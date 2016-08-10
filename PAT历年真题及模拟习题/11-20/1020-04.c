#include<stdio.h>
int partition(long long*a,int low,int high)
{
    int key;
    int tmp;
    key=a[low];
     
    while(low<high){
        while(low<high&&a[high]>=key)high--;
        tmp=a[low];
        a[low]=a[high];
        a[high]=tmp;
        while(low<high&&a[low]<=key)low++;
        tmp=a[low];
        a[low]=a[high];
        a[high]=tmp;
    }
     
    return low;
}
 
int qsort(long long*a,int low,int high)
{
    int pivot;
    if(low<high){
        pivot=partition(a,low,high);
        qsort(a,low,pivot-1);
        qsort(a,pivot+1,high);
    }
     
    return 0;
}
 
int main()
{
    int n;
    long long P;
    int i;
     
    scanf("%d %lld",&n,&P);
    long long a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
     
    int high,low;
    low=0;
    high=n-1;
    qsort(a,low,high);
     
    int num=n;
    i=0;
    long long tmp;
     
    int maxlen=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=i+maxlen;j<n;j++){
            if(a[i]*P<a[j])break;
        }
        if(j-i>maxlen)maxlen=j-i;
    }
        
    printf("%d",maxlen);
     
    return 0;
     
}
