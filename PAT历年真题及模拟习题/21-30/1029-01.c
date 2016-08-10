#include<stdio.h>
#include<math.h>
#include<string.h>
int count(char c,char *s){
	int i,num=0;
	char line[1000];
	for(i=0;line[i]!='\n';i++){
			if(line[i]==c)
				num++; 
	}
	return num;
}
int main()
{	int i,num=0,flag=0;
    char l1[1000],l2[1000];
	for(i=0;l1[i]!='\n';i++)
		scanf("%s",l1);
	for(i=0;l2[i]!='\n';i++)
		scanf("%s",l2);
	for(i=0;l2[i]!='\n';i++)
	{	if(count(l2[i],l2)<=count(l2[i],l1))
			continue;
		else 
		{	num+=count(l2[i],l2)-count(l2[i],l1);
			flag=1;
		}
	}	
	if(flag)	printf("No %d",num);
	else 
		printf("Yes %d",strlen(l1)-strlen(l2));
    return 0;
}
