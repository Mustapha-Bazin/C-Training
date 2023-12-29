#include<stdio.h>
#include<stdlib.h>


#define MAX_LEN 20
#define MIN_AGE 18
#define MAX_AGE 28


typedef struct{
	char *name;
	int age;

} record;


record *rec_rand_create(int n);
void rec_sort(record *v, int n);
void rec_print(record *v,int n);
void rec_free(record *v,int n);


int main(){
	int n;
	record * v;
	
	printf("Inserire numero di record\n");
	scanf("%i", &n);
	v = rec_rand_create(n);
	
	printf("ELENCO ORIGINALE\n");
	rec_print(v, n);
	
	
	rec_sort(v, n);
	printf("ELENCO ORDINATO\n");
	rec_print(v, n);
	
	rec_free(v,n);
	return 0;
}

record *rec_rand_crete(int n){

	record *r=malloc(n*sizeof(record));
	
	for(int i=0;i<n;i++){
		int l= rand()%MAX_LEN +1;
		r[i].name=malloc(l+1);
		for(int j=0;j<l;j++){
			r[i].name[j]=rand()%('z'-'a'+1)+'a';
		}
		
		r[i].age=rand()%(MAX_AGE-MIN_AGE+1)+MIN_AGE;
		
	}

	return r;
}


void rec_sort(record *v, int n){

	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			int n;
			if(v[i].age>v[j].age){
				n=v[j].age;
				v[j].age=v[i].age;
				v[i].age=n;
			}
		}
	}


}

void rec_print(record *v,int n){
	
	for(int i=0;i<n;i++){
		printf("name=%s and the age =%i\n",v[i].name,v[i].age);
	}
}


void rec_free(record *v,int n){

		for(int i=0;i<n;i++){
			free(v[i].age);
		}
		free(v);
}










































