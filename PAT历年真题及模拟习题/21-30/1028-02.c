#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����ϲ���������ˮ��
int main(int argc, char *argv[]) {
//  freopen("1.txt","r",stdin);
    int scores[MAX];
    int getNum[MAX];
    memset(scores,0,sizeof(scores[0])*MAX);//ָ���ڴ��ǰn���ֽ�����Ϊ�ض���ֵ
    int n,t,i,temp ;
    scanf("%d",&n);
    //¼�����з���
    for( i = 0 ; i < n ; i++ ){
        scanf("%d",&temp);
        scores[temp] = scores[temp] + 1;
    }
    scanf("%d",&t);
    //¼����Ҫ�ҵķ���
    for( i = 0 ; i < t ; i++ ){
        scanf("%d",&getNum[i]);
    }
    //�����������
    for( i = 0 ; i < t ; i++ ){
        if( i > 0) printf(" ");
        printf("%d",scores[getNum[i]]);
    }
    return 0;
}
