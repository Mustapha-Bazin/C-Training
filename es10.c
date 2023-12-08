#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char s[20];
	char input[5];
	int a,b;
	
	printf("inserisci la stringa\n");
	fgets(s,sizeof(s),stdin);
	do{
		printf("inserisci il valore di a\n");
		fgets(input,sizeof(input),stdin);
		a=strtol(input,NULL,10);

		printf("inserisci il valore di b\n");
		fgets(input,sizeof(input),stdin);
		b=strtol(input,NULL,10);
	}while(a>b || a<0 && b>sizeof(s) );
	
	int f=1;
	if(s[a]=='+'|| s[a]=='-') a++;
	for(int i=a;i<=b && f; i++){
		if(s[i]<'0'||s[i]>'9'){
			f=0;
		}
	}
	
	if(f){
		printf("e un numero\n");
	}else{
		printf("non e un numero\n");
	}
}
