//day Nov26 10:24 by MUSTAPA BAZIN

//it: se legga da standard input un array v1 di 10 interi. Si costruisca un altro array v2 in cui [la somma di tutti gli elementi di v1, le somma degli elementi v1 a partire dal secondo,...]


#include<stdio.h>
#include<stdlib.h>

int main(void){
	char input[5];
	int v1[10]={0},v2[10]={0},sum=0,i;
	
	printf("bienvenue dans mon code\n");
	for(i=0;i<sizeof(v1)/sizeof(int);i++){
		printf("set the %i number\n",i+1);
		fgets(input,sizeof(input),stdin);
		v1[i]=strtol(input,NULL,10);
		sum+=v1[i];
	}
	
	for(i=0;i<10;i++){
		v2[i]=sum--;
		printf("%i ",v2[i]);
	}	
	
	printf("\n");
}
