#include<stdio.h>
#include<stdlib.h>


#ifndef LEN_V 
#define LEN_V 10
#endif

#define MAX(x,y) (x>y ? x:y )

int main(int argc, char *argv[]){

	printf("the value of LEN_V =%i \n",LEN_V);
	if(argc==3)
	printf("the max between %s and %s is %i\n",argv[1],argv[2],MAX(atoi(argv[1]),atoi(argv[2])));
	return 0;
}
