#include <stdio.h>
#include <math.h>
int IsPrime(int number)
{	int t;
for(t=2;t<=sqrt(number);t++){
		if(number%t==0)
		return 0;
	}
	return 1;
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    
    if (m <= n && n <= 10000){
        int c = 0,t = 0;
        int i ; 
        for (i = 2; c < n; i++){
            if (IsPrime(i) == 1){
                c++;
                if (c>= m){
                    printf("%d", i);
                    t++;
                    if (t % 10 == 0 || c == n){
                        printf("\n");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}
