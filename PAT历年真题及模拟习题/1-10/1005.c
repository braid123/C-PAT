#include <stdio.h>
struct student{
	int id;
	int de,cai;
};

int main(){
	struct student students[100000],temp;
	int N,L,H;
    scanf("%d %d %d\n",&N,&L,&H)
    for(i=0;i<N;i++)
    {
    	scanf("%d ",&students[i].id);
    	scanf("%d ",&students[i].de);
    	scanf("%d\n",&students[i].cai);
	}
	for(i=0;i<N;i++){
		if(students[i].de>=L&&students[i].cai>=L)
		{count++;
			index=i;
			for(j=i+1;j<N;j++)
if(students[j].de+students[i].cai>students[index].de+students[index].cai)
				index=j;
			temp=students[index];
			students[index]=students[i];
			students[i]=temp;

	
	
	
	
	
		
		
	/*	index=i;
		for(j=i+1;j<N;j++)
			if(students[j].de>students[index].de)
			index=j;
		temp=students[index];
		students[index]=students[i];
		students[i]=temp;
	}*/ 
	
    return 0;
}
