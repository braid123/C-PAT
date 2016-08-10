#include<stdio.h>

int main()
{
    char str[10010];
    gets(str);
    
    int iStr=0,iNum=0,flag1=0,flag2=0,zhishu=0; // 0 正号  1负号 
    char num[10000];
    
    //[+-]
    if(str[0]=='+') flag1=0; else flag1=1;  
    
    // [1-9]"."[0-9]+
    iStr=1;
    while(str[iStr]!='E')
    {
        if('0'<=str[iStr] && str[iStr]<='9')
        {
            num[iNum]=str[iStr];
            iNum++;
        }
        iStr++;
    }
    
    //E[+-]
    iStr++;
    if(str[iStr]=='+') flag2=0; else flag2=1;
    
    //[0-9]+
    iStr++;
    while(str[iStr])
    {
        zhishu=zhishu*10+str[iStr]-'0';
        iStr++; 
    }
    
    
   // int iStr=0,iNum=0,flag1=0,flag2=0,zhishu=0; // 0 正号  1负号 
    //char num[10000];
    if(flag1) printf("-");
    if(flag2) //指数 负 
    {
        for(int i=0;i<zhishu;i++)
        {
            printf("0");
            if(!i)
                printf(".");
        }
        for(int i=0;i<iNum;i++)
            printf("%c",num[i]); 
    }
    else //指数 正 
    {
         if(iNum-1>zhishu)
         {
             for(int i=0;i<iNum;i++)
             {
                 printf("%c",num[i]);
                 if(i==zhishu)
                     printf(".");
             }
         }
         else
         {
             for(int i=0;i<iNum;i++)
                 printf("%c",num[i]);
             for(int i=iNum;i<=zhishu;i++)
                     printf("0");
                 
         }
    }
    return 0;
}
