#include<stdio.h>
#include<stdlib.h>
#include "sum.h"
#include "mult.h"

int main(){
	int n,a,b;
	char input[5];
	printf("Welcome\n");
	
	do{
		printf("you can chose just one operation of those: \n");
		printf("1 for summa\n2 for multiplication\n");
		fgets(input,sizeof(input),stdin);
		n=strtol(input,NULL,10);
		printf("%i\n",n);
		
	}while(n!=1 && n!=2);
	
	printf("set the first number\n");
	fgets(input,sizeof(input),stdin);
	a=strtol(input,NULL,10);
	
	printf("set the second number \n");
	scanf("%i",&b);
	
	if(n==1){
		printf("the summa of %i and %i equal %i\n",a,b,summa(a,b));
	}else{
		printf("the multiplication of %i and %i equal %i\n",a,b,multiplication(a,b));
	}
	
	printf("END\n");
	
}
