// day Nov26 09:58 by MUSTAPHA BAZIN

//it : si legga da standard input un array di 7 interi. Si stampino prima tuuti gli elemeti di indice dispari e poi quelli di indice pari. esempio [INPUT] 11 20 37 45 51 69 75 [OUTPUT] 11 37 51 75 20 45 69
//en: Read an array of 7 integers from standard input. Print first all elements with odd indices and then those with even indices. Example [INPUT] 11 20 37 45 51 69 75 [OUTPUT] 11 37 51 75 20 45 69

// char ==>> 1byte    int ==> 4byte

#include<stdio.h>
#include<stdlib.h>
int main(void){
	char input[5];
	int v[7]={0} , i;
	
	printf("welcome to my code\n");
	
	for(i=0;i<7;i++){
		printf("set the %i numbere\n",i+1);
		fgets(input,sizeof(input),stdin);
		v[i]=strtol(input,NULL,10);
	}
	
	for(i=0;i<7;i+=2){
		printf("%i ",v[i]);
	}
	for(i=1;i<7;i+=2){
		printf("%i ",v[i]);
	}
	printf("\n");
	return 0;
}
