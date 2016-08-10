#include<stdio.h>

#define N 100000
int fen[N]; //分数
int cha[N]; //要查询的分数

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i,k;
        int freq[101]={0};  //0分~100分分别出现的次数
        for(i=0;i<n;i++)
        {
            scanf("%d",&fen[i]);    //输入某个分数
            freq[fen[i]]++;         //统计某个分数出现的次数
        }
        scanf("%d",&k);
        for(i=0;i<k;i++)scanf("%d",&cha[i]);    //输入要查询的分数
        for(i=0;i<k;i++)
        {   //要查询的分数出现的次数
            if(i==0)printf("%d",freq[cha[i]]);  //第1个数
            else printf(" %d",freq[cha[i]]);    //从第2个数开始,每个数前面有1个空格
        }
        printf("\n");   //最后一个数后面换行
    }
    return 0;
}

