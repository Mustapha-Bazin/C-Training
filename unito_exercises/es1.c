//date= 26/11 at 09:36 am by MUSTAPHA BAZIN 

//it: concatenare tree stringhe v1 v2 e v3 senza utilizare le funzione di libreria strcat,strncat, strlen,etc

//eng: To concatenate three strings v1, v2, and v3 without using library functions like strcat, strncat, strlen, etc.

#include<stdio.h>

int main(){
	char v1[]="hello", v2[]="world", v3[]="!!";
	int len1=sizeof(v1),len2=sizeof(v2),len3=sizeof(v3),len=len1+len2+len3;
	char v[len];
	
	for(int i=0;i<len;i++){
		if(i<len1 && v1[i]!='\0'){
			v[i]=v1[i];
		}else if(i<len1 && v1[i]=='\0' || i<len1+len2 && v2[i-len1]=='\0'){
			v[i]=' ';
		}else if(i<len1+len2 && v2[i-len1]!='\0'){
			v[i]=v2[i-len1];
		}else{
			v[i]=v3[i-len1-len2];
		}
	}
	
	printf("%s\n",v);
}
