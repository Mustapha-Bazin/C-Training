#include<stdio.h>
#include<stdlib.h>

#ifndef LEN_S
#define LEN_S 20
#endif

void is_number(char string[],int min,int max);

int main(){

	int a,b;
	char s[LEN_S],input[5];
	printf("inserici la tua stringa \n");
	fgets(s,sizeof(s),stdin);
	printf("      ***\n");
	
	printf("inserici i borni della sotto stringa:\n");
	do{
		printf("!!! min deve essere <= max && max <=LEN_S-1 !!!\n");
		printf("***the min:\n");
		fgets(input,sizeof(input),stdin);
		a=strtol(input,NULL,10);
		
		printf("***the max:\n");
		fgets(input,sizeof(input),stdin);
		b=atoi(input);
		
	}while(a>b || b>LEN_S);
	
	
	is_number(s,a,b);
	
	printf("FIN!!\n");
	return 0;

}
void is_number(char string[],int min,int max){
	int i,b=1;
	for(i=min;i<=max && b;i++){
		if(string[i]>='0' && string[i]<='9'){
		//printf("hello");
			b=1;
		}else{
			b=0;
		}
	}
	
	if(b){
		printf("la sottostringa e un numero\n");
	}else{
		printf("la sottostringa non e un numero\n");
	}

}
