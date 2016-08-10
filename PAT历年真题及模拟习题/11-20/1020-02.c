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
 
    for (int i = 0; count != n && i < n - count; i++) { // ��֪�������г��ȴﵽ������ʱ���˳�ȫ��ѭ��
        for (int j = i + count; j < n; j++) { // ����֤���н�β���ִ�i+count��ʼ
            if (j == n-1 || ary[j+1] > (long long)ary[i] * p) {
                if (ary[j] <= (long long)ary[i] * p) {
                // ����ʱ��ij��������������У����¸�j����������������Ҫ�󣬴�ʱ��ij��Ϊ���ڵ�ǰi����������������
                    temp = j - i + 1; // ���㵱ǰ���г���
                    count = (temp > count) ? temp : count; // ����֪�ĶԱȣ�ȡ�����һ��
                }
                break;
            }
        }
    }
 
    printf("%d", count);
 
    return 0;
}
