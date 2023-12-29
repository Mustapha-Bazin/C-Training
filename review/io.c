#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	int n,m;
	char input[5];
	
	if(argc==3){
		n=atoi(argv[1]);
		m=atoi(argv[2]);
		
		printf("n equal %i\n",n);
		printf("m equal %i\n",m);
	}else{
		printf("set the value of n\n");
		fgets(input,sizeof(input),stdin);
		//n=strtol(input,NULL,10);
		n=atoi(input);
		printf("n equal %i\n",n);
		
		printf("st the value of m\n");
		scanf("%i",&m);
		printf("m equal %i\n",m);
	}
	
	

	return 0;
}
