//day Nov26 19:06 by MUSTAPHA BAZIN



#include<stdio.h>
#include<stdlib.h>

#define MAX_LEN 81
int main(){
	char s1[MAX_LEN],s2[MAX_LEN];
	char * p;
	int i=0;
	
	printf("entra s1\n");
	fgets(s1,sizeof(s1),stdin);
	
	printf("entra s2\n");
	fgets(s2,sizeof(s2),stdin);
		
	
	for(int j=0;j<sizeof(s1);j++){
		if(!(32<=s1[j] && s1[j]<=126)){
			s1[j]=0;
			break;
		}
	}
	
	for(int j=0;j<sizeof(s2);j++){
		if(!(32<=s2[j] && s2[j]<=126)){
			s2[j]=0;
			break;
		}
	}
	
	for(p=s1;*p!=0;p++){
		if(*(s2+i)==0){
		   break;
		}
		if(*p==*(s2+i)){
			i++;
		}else{
			i=0;
		}
	}
	
	
	
	printf("%s\n", p);

	return 0;
	
	
}
