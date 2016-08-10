#include <stdio.h>
#include <stdlib.h>
 
int comp(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
 
int main()
{
    int n = 0, p = 0, count = 0, temp = 0;
    scanf("%d%d", &n, &p);
    int ary[n];
 
    for (int i = 0; i < n; i++)
        scanf("%d", ary+i);
 
    qsort(ary, n, sizeof(int), comp);
 
    for (int i = 0; count != n && i < n - count; i++) { // 已知完美数列长度达到最大可能时，退出全部循环
        for (int j = i + count; j < n; j++) { // 待验证数列结尾部分从i+count开始
            if (j == n-1 || ary[j+1] > (long long)ary[i] * p) {
                if (ary[j] <= (long long)ary[i] * p) {
                // 当此时的ij组合满足完美数列，但下个j，不满足完美数列要求，此时的ij对为对于当前i的最大可能完美数列
                    temp = j - i + 1; // 计算当前数列长度
                    count = (temp > count) ? temp : count; // 跟已知的对比，取更大的一个
                }
                break;
            }
        }
    }
 
    printf("%d", count);
 
    return 0;
}
