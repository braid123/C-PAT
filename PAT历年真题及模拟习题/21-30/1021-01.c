#include <stdio.h>
int main(){
    char a[100][19];
    int n;
    int i,j;
    int sum;
    int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char c[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int flag=1;     
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s", a[i]);//�൱��scanf("%s", &a[i][0]); 
		//����ĵ�ַ��������Ԫ�صĵ�ַ��һ����
     
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<17 && a[i][j]-'0'>=0 && a[i][j]-'0'<=9 ;j++){
     
                sum+=b[j]*(a[i][j]-'0');
            }
            if(j!=17 || a[i][17]!=c[sum%11]){
                flag=0;
                printf("%s\n", a[i]);//�����������ַ��� 
            }
        }
     
    if(flag==1)
        printf("All passed");
     
    return 0;
}
