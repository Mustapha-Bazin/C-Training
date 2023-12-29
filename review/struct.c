#include<stdio.h>
#include<stdlib.h>

struct Mystruct{
	
	int age;
	char name[20];
	char adresse[80];
};


int main(){

	struct Mystruct person1={12,"mustapha","via berta"};

	
	printf("your name is %s\n",person1.name);
	return 0;
}
