#include <stdio.h>
 
int main (void)
{
    int N;  //ѧ��������
    int K;  //��ѯ�ķ�������
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
