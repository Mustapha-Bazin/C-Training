#include<stdio.h>
#include<stdlib.h>

int main(){

	int n,i;
	char s[5];
	
	printf("inserisci il numero\n");
	
	fgets(s,sizeof(s),stdin);
	n=strtol(s,NULL,10);
	
	for(i=1;i<=n;i++){
		int a=i, l=1;
		while(a!=1){
			if(a%2==0){
				a=a/2;
			}else{
				a=a*3+1;
			}
			l++;
		}
		printf("la sequenza GENERATA per %i = %i\n",i,l);
	}
}
