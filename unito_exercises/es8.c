#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int base, altezza,i,j;
	char input[5];
	
	printf("inserisci la base del triangolo\n");
	fgets(input,sizeof(input),stdin);
	base=atoi(input);
	
	printf("inserisci l'altezza del triangolo\n");
	fgets(input,sizeof(input),stdin);
	altezza=atoi(input);
	
	for(i=0;i<altezza;i++){
		for(j=0;j<(base-1)*i/(altezza-1)+1;j++){
			printf("*");
		}
		printf("\n");
	}

}
