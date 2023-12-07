#include<stdio.h>
#include<stdlib.h>

int main(){

	int v1[]={1,2,3,4};
	int v2[4]={0};
	int len_v1, len_v2,len_s2;
	
	char s1[]="hello world!";
	char s2[]={'h','e','l','l','o','\0'};
	
	char s3[6]; // 5 elements + end of string \0
	
	// print the string s1
	printf("%s\n",s1);
	
	// print the character s2[3]
	printf("%c\n",s2[3]);
	
	//print the elements of array v1
	for(int i=0; i<sizeof(v1)/sizeof(v1[0]);i++){
	
		printf("v1[%i]=%i ",i,v1[i]);
	}
	printf("\n");
	
	//number of elements of v1 and v2
	
	for(len_v1=0;v1[len_v1];len_v1++);
	printf("the number of elements of v1=%i\n",len_v1);
	
	len_v2=sizeof(v2)/sizeof(v2[0]);
	printf("the number of elements of v2=%i\n",len_v2);
	
	//number of elements of s2
	len_s2=sizeof(s2)/sizeof(char);
	printf("the number of elements of s2=%i\n",len_s2);
	
}
