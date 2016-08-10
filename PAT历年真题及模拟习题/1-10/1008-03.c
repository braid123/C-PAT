#include<stdio.h>
char max(int c, int j, int b)
{
    if (c >= j&&c > b) return 'C';
    else if (b >= c&&b >= j)return 'B';
    else if (j > c&&j > b)return 'J';
    else return 0;
}
int main()
{
    int n;
    char A, B;
    char s1[105], s2[105];
    scanf("%d\n", &n);
    int AC = 0, BC = 0, P = 0;
    int i = 0, j = 0;
    while ( n--)
    {
        scanf("%c %c", &A, &B);
        getchar();
        if ((A == 'C'&& B == 'J') || (A == 'B'&&B == 'C') || (A == 'J'&&B == 'B'))
        {
            AC++;
            s1[i] = A;
            i++;
        }
        else if ((B == 'C'&& A == 'J') || (B == 'B'&&A == 'C') || (B == 'J'&&A == 'B'))
        {
            BC++;
            s2[j] = B;
            j++;
        }
        else 
             P++;
    }
    printf("%d %d %d\n", AC, P, BC);
    printf("%d %d %d\n", BC, P, AC);
     
    int l1 = i, l2 = j;
    int c1 = 0, j1 = 0, b1 = 0;
    int c2 = 0, j2 = 0, b2 = 0;
    for (i = 0; i < l1; i++)
    {
        if (s1[i] == 'C') c1++;
        else if (s1[i] == 'J') j1++;
        else if(s1[i]=='B') b1++;
    }
    printf("%c ", max(c1, j1, b1));
    for (j = 0; j < l2; j++)
    {
        if (s2[j] == 'C') c2++;
        else if (s2[j] == 'J') j2++;
        else if(s2[j]=='B') b2++;
    }
    printf("%c", max(c2, j2, b2));
     
    return 0;
}
