#include<stdio.h>
#include<string.h>
int main()
{
    char sell[10010]={0};
    char want[10010]={0};
    int count=0,i,j;
    gets(sell);
    gets(want);
    for(i=0;i<strlen(want);i++)
    {
        if(strchr(sell,want[i]))//在字符串s中查找字符c首次出现的地址 
        {
            sell[strchr(sell,want[i])-sell]=' ';
        }
		else
        {
            count++;
        }
    }
    if(count)
    {
        printf("No %d",count);
    }else
    {
        printf("Yes %d",strlen(sell)-strlen(want));
    }
      
    return 0;
}
