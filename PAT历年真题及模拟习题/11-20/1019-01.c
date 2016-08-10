#include<stdio.h>
#include<string.h>
int main()
{char s1[80],s2[80],s3[80];
	char *p,*q;
int i=0,j,flag;
    scanf("%s%s",&s1,&s2);
    p=&s1[0];
    q=&s2[0];
    while(*p!='\0'){
    	if(*p==*q){
    		p++;
    		q++;
		}
		else {
		if(('a'<=*p)&&(*p<='z')) 
			s3[i]=*p-'a'+'A';
		else  
			s3[i]=*p;
		p++;
		i++;
		}
	}
	s3[i]='\0';
    for(i=0;s3[i]!='\0';i++){
        flag=1;
        for(j=0;j<i;j++){
            if(s3[i]==s3[j]) flag=0;//ШЅжи 
        }
        if(flag) printf("%c",s3[i]);
}
    return 0;
}
