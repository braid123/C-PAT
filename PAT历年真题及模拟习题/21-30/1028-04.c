#include<stdio.h>

#define N 100000
int fen[N]; //����
int cha[N]; //Ҫ��ѯ�ķ���

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i,k;
        int freq[101]={0};  //0��~100�ֱַ���ֵĴ���
        for(i=0;i<n;i++)
        {
            scanf("%d",&fen[i]);    //����ĳ������
            freq[fen[i]]++;         //ͳ��ĳ���������ֵĴ���
        }
        scanf("%d",&k);
        for(i=0;i<k;i++)scanf("%d",&cha[i]);    //����Ҫ��ѯ�ķ���
        for(i=0;i<k;i++)
        {   //Ҫ��ѯ�ķ������ֵĴ���
            if(i==0)printf("%d",freq[cha[i]]);  //��1����
            else printf(" %d",freq[cha[i]]);    //�ӵ�2������ʼ,ÿ����ǰ����1���ո�
        }
        printf("\n");   //���һ�������滻��
    }
    return 0;
}

