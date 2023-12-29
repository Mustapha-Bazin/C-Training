#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int array[8]={1,2,3,4,5,6,7,8};
	char string[]="hey MUSTAPHA";
	
	int *p_a;
	char *p_s;
	
	
	p_a=array; // *p_a=array[0]  && p_a=&array[0]
	//printf("the adresse of %i equal %p\n",*p_a,p_a);
	
	int i;
	for(i=0,p_a; i<sizeof(array)/sizeof(array[0]); p_a++,i++){
		printf("array[%i]=%i\n",i,array[i]);
		printf("the adresse of %i = %p\n",*p_a, p_a);
		
		
	}
	
	p_s=string; // *p_s=string[0] && p_s=&string[0]
	
	printf("the addresse of %c equal %p\n",*p_s,p_s);
	
	printf("%p\n",p_s); //&s[0]; 
	printf("%s\n",p_s);// s
	return 0;
}
