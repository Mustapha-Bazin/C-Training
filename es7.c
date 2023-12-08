#include<stdio.h>
#include<stdlib.h>

int main(){
	
	unsigned int n,mask;
	char input[5];
	char output[sizeof(n)*8];
	
	
	printf("write the number \n");
	fgets(input,sizeof(input),stdin);
	
	n=atoi(input);
	mask= 1<<(sizeof(n)*8-1);
	
	for(mask;!(mask & n); mask>>=1 );
	int i;
	for(i=0;mask;mask>>=1){
		if(n&mask){
			output[i++]='1';
		}else{
			output[i++]='0';
		}
	}
	
	output[i]=0;
	printf("the binary number of %d is %s\n",n,output);
	return 0;
}
