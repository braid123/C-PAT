#include<stdio.h>
int main()
{
    int n, m, i;             
    double sum = 0;           
    int a[1000] = {0};            
    int price[1000] = {0};    
    double uprice[1000] = {0};
    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);       
    for(i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
        uprice[i] = ((double)price[i]) / a[i];
    }
    while(m)   {
        int tmp = 0;
        for(i = 0; i < n; i++)
            if(uprice[i] > uprice[tmp])
                tmp = i;  //求出最大的单价 
        if(a[tmp] < m){
            sum += price[tmp];
            uprice[tmp] = 0;
            m -= a[tmp];
        }
        else{
            sum += m * uprice[tmp];
            break;
        }
    }       
    printf("%.2lf\n", sum);       
    return 0; 
}
