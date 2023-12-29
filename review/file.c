#include<stdio.h>
#include<stdlib.h>


int main(){
	
	char buffer[30];
	FILE *fp;
	
	//for reading a file 
	
	if((fp=fopen("myfil","r"))==NULL){
		perror("file");
		exit(-1);
	}
	
	fgets(buffer,sizeof(buffer),fp);
	printf("%s",buffer);
	
	//for write in file 
	/*
	if((fp=fopen("myfil","w"))==NULL){
		perror("file");
		exit(-1);
	}

	fputs("hello mustapha its nice to meet you",fp);
	
	*/
	fclose(fp);
	return 0;

}
