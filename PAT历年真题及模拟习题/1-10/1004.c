#include <stdio.h>
#define N 60
    
int main(){
    char a1[N], a2[N], a3[N], a4[N];
    gets(a1);
    gets(a2);
    gets(a3);
    gets(a4);
    char d, h;
    int m;int i;
    int c = 100;
    for (  i = 0; a1[i] != '\0' && a2[i] != '\0'; i++){
        if (a1[i] == a2[i]){
            if (a1[i] >= 'A' && a1[i] <= 'G' && i < c){
                d = a1[i];
                c = i;
                continue;
            }
            if (((a1[i] >= 'A' && a1[i] <= 'N') ||
                (a1[i] >= '0' && a1[i] <= '9')) && i > c){
                h = a1[i];
                break;
            }         
        }
    }
for (i = 0;a3[i] != '\0' && a4[i] != '\0'; i++){
if (a3[i] == a4[i] && ((a3[i] >= 'a' && a3[i] <= 'z') || (a3[i] >= 'A' && a3[i] <= 'Z')))
	{
            m = i;
            break;
        }
    }
    
    switch (d){
    case 'A':printf("MON ");
        break;
    case 'B':printf("TUE ");
        break;
    case 'C':printf("WED ");
        break;
    case 'D':printf("THU ");
        break;
    case 'E':printf("FRI ");
        break;
    case 'F':printf("SAT ");
        break;
    case 'G':printf("SUN ");
        break;
    default:
        break;
    }
    
    if (h >= '0' && h <= '9'){
        printf("0%c:", h);
    }
    if (h >= 'A'&&h <= 'N'){
        printf("%d:", h-'A'+10);
    }
    printf("%02d\n", m);
       
    return 0;
}
