#include<stdio.h>

int a[4]={0};
void r_sort(int num[])
 { for (int i=0;i<4;i++)
   { int min=num[i]; 
   for(int j=i+1;j<4;j++)
       { if (num[j]<min)
           {  min=num[j];
              num[j]=num[i];
              num[i]=min;   
           }
        
       }
  }  
}
void d_sort(int num[])
 {
    for (int i=0;i<4;i++)
   { int max=num[i]; 
   for(int j=i+1;j<4;j++)
       { if (num[j]>max)
           {  max=num[j];
              num[j]=num[i];
              num[i]=max;   
           }
        
       }
  }  
}
int fun(int num)
 {
   int i=0;
   int r=0;
   do
    {  a[i]=num%10;
       i++;
       num/=10;
   }
    while(num);
    if(a[0]==a[1]&&a[2]==a[3]&&a[0]==a[2]&&a[0]&&a[3]&&a[1]==a[2]&&a[1]==a[3])
    {   int equal_num=a[0]*1000+a[1]*100+a[2]*10+a[3];
        printf("%d%d%d%d - %d%d%d%d = 0000\n",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0]);
    return 0;
    }
   r_sort(a);
   int new_num1=a[0]*1000+a[1]*100+a[2]*10+a[3];
   d_sort(a);
   int new_num2=a[0]*1000+a[1]*100+a[2]*10+a[3];
    r=new_num2-new_num1;
      printf("%d%d%d%d - %d%d%d%d = %4d\n",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0],r); 
    
    return r;
     
}
int main()
 { int n;
   scanf("%d",&n);
    
       do
       {
        
           n=fun(n);      
           if(n==0)
               break;
        
       }while(n!=6174);
    
     return 0;
   
}
