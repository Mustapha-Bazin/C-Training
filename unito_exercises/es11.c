#include<stdio.h>
#include<stdlib.h>



int main(){

	char input[200];
	int n=0,b;
	int i,sign=1;
	
	
	do{
		printf("set a number\n");
		fgets(input,sizeof(input),stdin);
		b=1;
		i=0;
		if(input[i]=='-'){
			sign=-1;
			i++;
		}
		
		//printf("%i",i);
		for(i;(input[i]!='\n' && input[i]!='\0') && b;i++){
			if(input[i]>='0'&& input[i]<='9'){
				b=1;
			}else{
				b=0;
			}
		}
		

	}while(!b);
	
	i=0;
	if(sign==-1){
		i++;
	}
	
	for(;input[i]!=10 && input[i]!=0 ;i++){
		n=n*10+(input[i]-'0');	
	}
	
	printf("your number is %i\n",n*sign);
	
	return 0;
}
