#include <stdio.h>  
#include <stdlib.h>  
//归并函数，将三个界桩中间的两列元素归并。数组temp是缓冲区域，应该与s的尺寸相同。  
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
  
    //寻找第一个逆序对，并将其首元素位置记在fir处  
    fir = 0;  
    while(tar[fir] <= tar[fir + 1]){  
        fir++;  
    }  
    //比较第一个逆序对后的所有元素，与原数列相应位置元素关系，  
    //据此判别排序方式  
    for (int i = fir + 1; i < N; i++)  
        if (tar[i] != arr[i]) {  
            isMerge = 1;  
            break;  
        }  
  
    if(isMerge){  
        //是归并排序，接下来先分析迭代规模，再进行下一次迭代  
        printf("Merge Sort\n");  
        int i, j, found;  
        found = 0;  
  
        //分析迭代规模的代码较为复杂  
        //思路并不难理解，分别按相应的迭代规模i进行分组，在每一组内查找有无逆序对  
        //   如果发现逆序对，则当前迭代规模就是目前的i  
        //   如果都没有，则迭代规模翻倍  
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
        //用迭代规模i进行下一次归并迭代  
        for (int k = 0; k < N / i; k++)  
            Merge(tar, i * k, i * k + (i>>1), i * k + i, arr);  
        if (N%i > (i>>1)) Merge(tar, N - N%i, N - N%i + (i>>1), N, arr);  
  
    }else{  
        //是插入排序，下一次迭代只需要将[fir + 1]元素插入到合适位置即可  
        printf("Insertion Sort\n");  
        int buf;  
        while(tar[fir] > tar[fir + 1]){  
            buf = tar[fir];  
            tar[fir] = tar[fir + 1];  
            tar[fir + 1] = buf;  
            fir--;  
        }  
    }  
  
    //第二次迭代完成，在此输出结果序列  
    for (int i = 0; i < N - 1; i++)  
        printf("%d ", tar[i]);  
    printf("%d\n", tar[N - 1]);  
  
    free(arr);  
    free(tar);  
    return 0;  
} 
