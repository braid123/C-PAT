#include<stdio.h>
 
int main(){
    int pg,ps,pk,ag,as,ak;
    int p,a,charge;
    int cg,cs,ck;
    int flag=1;
    scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
     
    p=(pg*17+ps)*29+pk;
    a=(ag*17+as)*29+ak;
    charge=a-p;
    if(charge<0) flag=-1;
    ck=flag*charge%29;
    charge=charge/29;
    cs=flag*charge%17;
    cg=charge/17;
    printf("%d.%d.%d",cg,cs,ck);
    return 0;
}
