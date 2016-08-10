#include "stdio.h"
int main()
	{int n;
	 char c;
    scanf("%d",&n);
        getchar();
    scanf("%c",&c);
    int i,j;
    for(i=0;i<n;i=i+2)
    {if(i!=0&&i!=n-1&&i!=n-2)
      {  printf("%c",c);
          for(j=0;j<n-2;j++)
          {printf(" ");}
          printf("%c\n",c);
      }
        if(i==0)
        {for(j=0;j<n;j++)
          {printf("%c",c);
          }
         printf("\n");
        }     
        if(i+2>=n)
        {for(j=0;j<n;j++)
         {printf("%c",c);}
            break;
        }
    }
}
