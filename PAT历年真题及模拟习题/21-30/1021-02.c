#include<stdio.h>
 
char jiaodui(char a[][19], int i){//注意二维数组的定义使用方式
    int j, sum = 0;
    char correct;
    int b[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    for(j=0; j<17; ++j){
        if ((a[i][j] - '0') > 9 || (a[i][j] - '0')<0)
            return '0';
        sum += ((a[i][j] - '0')*b[j]);
    }
    sum = sum%11;
    switch(sum)
                {
                case 0:correct ='1';break;
                case 1:correct ='0';break;
                case 2:correct ='X';break;
                case 3:correct ='9';break;
                case 4:correct ='8';break;
                case 5:correct ='7';break;
                case 6:correct ='6';break;
                case 7:correct ='5';break;
                case 8:correct ='4';break;
                case 9:correct ='3';break;
                case 10:correct ='2';break;
                }
    if (correct == a[i][17]){
        return '1';
    }
    else{
        return '0';
    }
}
 
int main()
{
    int N;
    int i,j;
    int flag = 0;//0表示不存在错误的数;
    char a[100][19];
    scanf("%d", &N);
    for(i=0; i<N; ++i){
        scanf("%s",a[i]);
        a[i][18] = jiaodui(a, i);
    }
    for(i=0; i<N; ++i){
        if (a[i][18] == '0'){
            flag = 1;//存在错误的号码
            for(j=0; j<18; ++j)
                printf("%c", a[i][j]);
            printf("\n");
        }
    }
    if(flag == 0)
        printf("All passed\n");
    return 0;
}
