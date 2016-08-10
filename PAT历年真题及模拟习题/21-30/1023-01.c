#include<stdio.h>
#include<string.h>
int main()
{	int i,j,same,flag;
    char line1[100000],line2[100000];
    scanf("%s%s",line1,line2);
    for(j=0;line2[j]!='\0';j++) {
    		flag=0;	
    	for(i=0;line1[i]!='\0';i++){
    		if(line1[i]=='+')
    			flag=1;
		}
	if(flag==1){
		for(i=0;line1[i]!='\0';i++){
				same=0;
			if(line2[j]==line1[i])
				same=1;
			if(line2[j]<='Z'&&line2[j]>='A')
				same=1;
else if((line2[j]<='z'&&line2[j]>='a')&&((line2[j]+'A'-'a')==line1[i]))
				same=1;
		while(same==0)
			printf("%c",line2[j]);
		}
	}
	else{
		for(i=0;line1[i]!='\0';i++){
				same=0;
			if(line2[j]==line1[i])
				same=1;
			else if((line2[j]<='z'&&line2[j]>='a')&&((line2[j]+'A'-'a')==line1[i]))
				same=1;
		while(same==0)
			printf("%c",line2[j]);
			}
		}
	}
    return 0;
}
