#include<stdio.h>
#include<stdlib.h>

int main(){
	
	double n;
	char input[9];
	printf("set the number\n");
	
	fgets(input,sizeof(input),stdin);
	
	n=atof(input);
	
	printf("you set the number %f\n",n);	
	
}
