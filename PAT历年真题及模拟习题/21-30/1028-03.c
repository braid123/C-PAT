#include <stdio.h>
 
int main (void)
{
    int N;  //学生总人数
    int K;  //查询的分数个数
    scanf("%d",&N);
    int array[N];
    int i,j,num,count;
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
     
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        scanf("%d",&num);
        count = 0;
        for(j=0;j<N;j++)
        {
            if(array[j]==num)
            {
                count++;
            }
        }
        printf("%d",count);
        if(i!=K-1)
        {
            printf(" ");
        }
    }
 
    return 0;
}
