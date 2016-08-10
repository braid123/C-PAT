#include "stdio.h"
#include "string.h"
int main()
{int n[10],i,j;
    for(i=0;i<10;i++)
    {scanf("%d",&n[i]);
    }
    for(i=1;i<10;i++)
        if(n[i]!=0)
        {printf("%d",i);
            n[i]--;
            break;}
    for(i=0;i<10;i++)
        for(j=0;j<n[i];j++)
        {printf("%d",i);
        }
    return 0;
}
