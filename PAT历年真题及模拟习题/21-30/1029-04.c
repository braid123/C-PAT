#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,j,len1,len2;
    char str1[1005],str2[1005];
    while (scanf("%s%s",str1,str2)==2)
    {
        len1=strlen(str1);
        len2=strlen(str2);
        int flag1[1005]={0};
        int flag2[1005]={0};
        for(i=0;i<len2;i++)
        {
            for(j=0;j<len1;j++)
            {
                if(flag1[j]==0)
                {
                    if(str2[i]==str1[j])
                    {
                        flag2[i]=1;
                        flag1[j]=1;
                        break;
                    }
                }
            }
        }
        int sum=0;
        for(i=0;i<len2;i++)
        {
            sum+=flag2[i];
        }
        if(sum==len2)
            printf("Yes %d\n",len1-len2);
        else
            printf("No %d\n",len2-sum);
    }
    return 0;
}
