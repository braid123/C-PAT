#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void a_div_b(char *A, int len, int B)
{
    int i;
    int mark = 0;
    int tmp = 0;
    for(i=0; i<len; i++){
        tmp = tmp*10 + A[i]-48;
        if(tmp >= B){
            printf("%d",tmp/B);
            mark = 1;
        }
        else if(mark){
            printf("0");
        }
 
        tmp = tmp % B;
    }
    if( 0 == mark ) printf("0");
    printf("% d", tmp);
}
 
int main()
{
    int B;
    char A[1000];
    scanf("%s %d", A, &B);
 
    a_div_b(A, strlen(A), B);
 
    return 0;
}
