#include<stdio.h>
#include<stdlib.h>

int *fibo(int n);

int main(){
	int n;
	char input[20];
	int *p;
	fgets(input,sizeof(input),stdin);
	n=atoi(input);
	
	if(n<=0){
		return 0;
	}
	
	p=fibo(n);
	for(int i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
	free(p);
}

int *fibo(int n){
	int *v=malloc(n*sizeof(n));
	v[0]=0;
	if(n==1){
		return v; 
	}
	v[1]=1;
	
	for(int i=2;i<n;i++){
		v[i]=v[i-1]+v[i-2];
	}
	
	return v;
}
