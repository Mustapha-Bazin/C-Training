//day Nov26 12:01 by MUSTAPHA BAZIN

// it: si legga una stringa e per ogni carattere presente nella stringa , scriva a stdout una riga con il numero di occorenze del carattere nella stringa e il carattere stesso. 

#include<stdio.h>
#include<stdlib.h>
//gcc -D ASCII=x es4.c -o es4
#ifndef ASCII
#define ASCII 20
#endif

int main(void){
	char input[ASCII];
	int ascii[256]={0},i;
	printf("welcome to my code\n");
	
	printf("set the sentence\n");
	fgets(input,sizeof(input),stdin);
	
	for(i=0;i<sizeof(input);i++){
		if(input[i]==10) break;   // LF==\n==10
		ascii[input[i]]++;		
	}
	
	printf("the result is: \n");
	for(i=0;i<256;i++){
		if(ascii[i]!=0)
		printf("%i,%c\n",ascii[i],i);
	}
	
	return 0;
}
