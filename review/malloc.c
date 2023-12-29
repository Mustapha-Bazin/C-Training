#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int *array;
	array=(int *)malloc(5*sizeof(int));
	
	for(int i=0;i<5;i++){
		array[i]=i*i;
	}
	
	for(int i=0;i<5;i++){
		printf("%i ",array[i]);
		
	}
	printf("\n");
	free(array);
	
	
	return 0;
}
