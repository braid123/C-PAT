#include<stdio.h>
#include<string.h>
int main()
{	int count=0,i,temp;
	char s[100000];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
    	if(s[i]=='P')
    		temp=i;
    	for(i=temp+1;s[i]!='\0';i++){
    		if(s[i]=='A')
    			temp=i;
    		for(i=temp+1;s[i]!='\0';i++){
    			if(s[i]=='T')
    			count++;
				}
			}			
		}
		printf("%d",count);
    return 0;
}
