#include<stdio.h>
#include<stdlib.h>

int sum(int *p,int n);

int main(){

	int array[5]={1,2,3,4,5};
	
	printf("the total of array is %i\n",sum(array,sizeof(array)/sizeof(int)));
	
	return 0;

}

int sum(int *p,int n){
	int sum=0;
	for(int i=0;i<n;i++,p++){
		sum+=*p;
	}
	
	return sum;
}
