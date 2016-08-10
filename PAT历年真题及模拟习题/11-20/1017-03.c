#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        char c;
        getchar();
        scanf("%c",&c);
        if(n<=1000)
        {
            int num=sqrt(1.0*(n+1)/2);
/*
注意到，我们设所有上半部分的符号共占据n 行，那么符号总数为
1 + 2·3 + 2·5 + 2·7 + 2·(2n-1) = 2(1+3+5+...+2n-1) - 1 = 2n^2 - 1.
因此，n 的值应该是根号(给定的符号总数+1)/2 向下取整的值。
*/
            int yushu=n-(2*num*num-1);
            int i=0,j=0;
            for(i=num;i>0;i--)//上半部分 
            {
                for(j=0;j<num-i;j++)
                    printf(" ");
                for(j=0;j<2*i-1;j++)
                    printf("%c",c);
                printf("\n");
            }
            for(i=2;i<=num;i++)//下半部分 
            {
                for(j=0;j<num-i;j++)
                    printf(" ");
                for(j=0;j<2*i-1;j++)
                    printf("%c",c);
                printf("\n");
            }
            printf("%d\n",yushu);
        }
    }
    return 0;
}
