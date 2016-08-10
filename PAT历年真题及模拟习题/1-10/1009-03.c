#include<stdio.h>
int main()
{
    int n, i, t;
    scanf("%d", &n);
    int a[5];
    int x, y, m;
    while (n != 6174&&n!=0)
    {
        a[0] = n / 1000;
        a[1] = (n / 100) % 10;
        a[2] = (n / 10) % 10;
        a[3] = n % 10;
        m = 3;
        while (m--)
        {
            for (i = 0; i <= m; i++)
            {
                if (a[i] < a[i + 1])
                {
                    t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
                }
            }
        }
        x = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        y = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
        n = x - y;
        if (n)
        printf("%d%d%d%d - %d%d%d%d = %d\n", a[0], a[1], a[2], a[3], a[3], a[2], a[1], a[0], n);
        else
            printf("%d - %d = 0000",x,y);
            
    }
    
    return 0;
}
