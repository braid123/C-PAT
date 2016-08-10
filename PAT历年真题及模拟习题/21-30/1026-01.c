#include<stdio.h>
#include<string.h>
int main()
{	int N,i,line;
	char c; 
    scanf("%d%c",&N,c);
	for(i=0;i<N;i++)
		printf("%c",c);
	 line=((N+0.5)/2);
	for(i=0;i<line-2;i++){
		printf("\n");
		printf("%c",c);
		for(i=0;i<N-2;i++)
			printf(" ");
		printf("%c\n",c);
	} 
	printf("%c",c);
		for(i=0;i<N-2;i++)
			printf(" ");
		printf("%c\n",c);
		for(i=0;i<N;i++)
		printf("%c",c);
    return 0;
}
