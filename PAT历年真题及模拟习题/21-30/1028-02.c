#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//我最喜欢打表，这种水题
int main(int argc, char *argv[]) {
//  freopen("1.txt","r",stdin);
    int scores[MAX];
    int getNum[MAX];
    memset(scores,0,sizeof(scores[0])*MAX);//指定内存的前n个字节设置为特定的值
    int n,t,i,temp ;
    scanf("%d",&n);
    //录入所有分数
    for( i = 0 ; i < n ; i++ ){
        scanf("%d",&temp);
        scores[temp] = scores[temp] + 1;
    }
    scanf("%d",&t);
    //录入需要找的分数
    for( i = 0 ; i < t ; i++ ){
        scanf("%d",&getNum[i]);
    }
    //输出分数个数
    for( i = 0 ; i < t ; i++ ){
        if( i > 0) printf(" ");
        printf("%d",scores[getNum[i]]);
    }
    return 0;
}
