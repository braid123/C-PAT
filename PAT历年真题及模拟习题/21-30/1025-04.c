#include <stdio.h>  
#include <stdlib.h>  
//�鲢��������������׮�м������Ԫ�ع鲢������temp�ǻ�������Ӧ����s�ĳߴ���ͬ��  
void Merge(int *s, int lo, int mi, int hi, int *temp){  
    if (mi - lo < 1 && hi - mi < 1)  
        return;  
    int i, j, k;  
    //Copy to temp  
    for (int i = lo; i < mi; i++)  
        temp[i] = s[i];  
    //Merge  
    j = mi; k = lo;  
    for (i = lo; i < hi; i++)  
    {  
        if (temp[k] < s[j])  
            s[i]=temp[k++];  
        else s[i] = s[j++];  
        if (k == mi) break;  
        if (j == hi) {  
            for (i++; i < hi; i++, k++){  
                s[i] = temp[k];  
            }     
            break;  
        }  
    }  
    return;  
}  
  
int main(int argc, char const *argv[])  
{  
    int N, *arr, *tar;  
    int fir;  
    int isMerge = 0;  
    scanf("%d", &N);  
    arr = malloc(N * sizeof(int));  
    tar = malloc(N * sizeof(int));  
  
    for (int i = 0; i < N; i++)  
        scanf("%d", arr + i);  
    for (int i = 0; i < N; i++)  
        scanf("%d", tar + i);  
  
    //Ѱ�ҵ�һ������ԣ���������Ԫ��λ�ü���fir��  
    fir = 0;  
    while(tar[fir] <= tar[fir + 1]){  
        fir++;  
    }  
    //�Ƚϵ�һ������Ժ������Ԫ�أ���ԭ������Ӧλ��Ԫ�ع�ϵ��  
    //�ݴ��б�����ʽ  
    for (int i = fir + 1; i < N; i++)  
        if (tar[i] != arr[i]) {  
            isMerge = 1;  
            break;  
        }  
  
    if(isMerge){  
        //�ǹ鲢���򣬽������ȷ���������ģ���ٽ�����һ�ε���  
        printf("Merge Sort\n");  
        int i, j, found;  
        found = 0;  
  
        //����������ģ�Ĵ����Ϊ����  
        //˼·��������⣬�ֱ���Ӧ�ĵ�����ģi���з��飬��ÿһ���ڲ������������  
        //   �����������ԣ���ǰ������ģ����Ŀǰ��i  
        //   �����û�У��������ģ����  
        for (i = 2; i < N; i=i<<1)  
        {  
            for (j = 0; j < N/i; j++)  
            {  
                for (int k = i * j; k < i * ( j + 1 ) - 1; k++)  
                    if (tar[k] > tar[k + 1]){found = 1; break;}  
                if(found) break;  
            }  
            if(found) break;  
            for (int k = i * (j + 1); k < N - 1; k++)  
                if (tar[k] > tar[k + 1]){found = 1; break;}  
            if(found) break;  
        }  
        //�õ�����ģi������һ�ι鲢����  
        for (int k = 0; k < N / i; k++)  
            Merge(tar, i * k, i * k + (i>>1), i * k + i, arr);  
        if (N%i > (i>>1)) Merge(tar, N - N%i, N - N%i + (i>>1), N, arr);  
  
    }else{  
        //�ǲ���������һ�ε���ֻ��Ҫ��[fir + 1]Ԫ�ز��뵽����λ�ü���  
        printf("Insertion Sort\n");  
        int buf;  
        while(tar[fir] > tar[fir + 1]){  
            buf = tar[fir];  
            tar[fir] = tar[fir + 1];  
            tar[fir + 1] = buf;  
            fir--;  
        }  
    }  
  
    //�ڶ��ε�����ɣ��ڴ�����������  
    for (int i = 0; i < N - 1; i++)  
        printf("%d ", tar[i]);  
    printf("%d\n", tar[N - 1]);  
  
    free(arr);  
    free(tar);  
    return 0;  
} 
