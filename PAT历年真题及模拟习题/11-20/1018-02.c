#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(char *a,char *b)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]-b[i]>0)
         return 1;
         if(a[i]-b[i]<0)
          return 0;
    }
    return 0;
}
int main()
{  
   int n,count=0,i;
   scanf("%d",&n);
    char max[11]="1814/09/05",min[11]="2014/09/07";
	char sname[6],syear[11],yname[6],oname[6];
    for(i=1;i<=n;i++)
    {
        scanf("%s %s",sname,syear);
        if(cmp(syear,"1814/09/05")&&cmp("2014/09/07",syear))
        {
            count++;
            if(cmp(syear,max))
            {
                strcpy(max,syear);
                strcpy(yname,sname);
            }
            if(cmp(min,syear))
            {
                strcpy(min,syear);
                strcpy(oname,sname);
            }
        }
    }
    printf("%d %s %s\n",count,oname,yname);
}
