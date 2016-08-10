#include <stdio.h>
#define MAXN 100000+1
 
struct People{
    char Name[6];
    char Birthday[11];
};

int main()
{
    struct People people[MAXN];
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s %s",people[i].Name,people[i].Birthday);
    }
    int maxBirthDay=2014*10000+9*100+6;
    int minBirthDay=1814*10000+9*100+6;
    int count=0;
    int maxValue=minBirthDay;
    int minValue=maxBirthDay;
    int maxIndex=0;
    int minIndex=0;
    for(i=0;i<N;i++){
        int t=0;
        int t1=0;
        int t2=0;
        int t3=0;
        for(j=0;j<=3;j++){
            t1=t1*10+(people[i].Birthday[j]-'0');
        }
        for(j=5;j<=6;j++){
            t2=t2*10+(people[i].Birthday[j]-'0');
        }
        for(j=8;j<=9;j++){
            t3=t3*10+(people[i].Birthday[j]-'0');
        }
        t=t1*10000+t2*100+t3;
 
        if(t>=minBirthDay && t<=maxBirthDay){
            count++;
            if(t<minValue){
                minValue=t;
                minIndex=i;
            }
            if(t>maxValue){
                maxValue=t;
                maxIndex=i;
            }
        }
    }
    printf("%d %s %s",count,people[minIndex].Name,people[maxIndex].Name);
    return 0;
}
