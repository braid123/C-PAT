#include <stdio.h>
 
int main() {
    int n;
    char c;
    scanf("%d %c", &n, &c);
 
    if (n <= 0) {
        printf("0");
        return 0;
    }
    int a = (n-1) / 2;
    if (a % 2 == 0) a -= 1;
    int i = 1;
    int count = 0;
    int row = 0;
    for (int i = 1;; i += 2) {
        count += i;
        row++;
        if (count + i >= a) {
            break;
        }
    }   //算出行数
 
    count = 0;
	//打印上半部分 
    for (int i = row; i > 0; i--) {
        for (int j = 0; j < row - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", c);
            count++;
        }
        printf("\n");
    }
 //打印下半部分 
    for (int i = 2; i <= row; i++) {
        for (int j = row - i; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", c);
            count++;
        }
        printf("\n");
    }
    printf("%d", n - count);
    return 0;
}
