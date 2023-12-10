# C-Training

	
	
	*comment:
			
			/*
			To run
				gcc main.c -o main
				
				or 
				
				gcc -o main main.c 
			then
				./main
			*/
			
			
			/*
			For debuggin
			
				gcc -o main_debug main.c -g
				
			then
				gdb main_debug
				
				
				[break main , run , next , step , finish , quit , list , set arg ,p x, p &x ]
				
			*/
	
	
	
	
	
	
								*****type variable*****

	*variable is space of memory
	
	 	+ memory is array of bytes within RAM
	 	+ memory block is a single unit (byte) within RAM, used to hold some value
	 	+ memory address is address of where a memory block is located
	 	 
							char (1 byte, %c, %d) ;
							
							int (4 bytes, %d) ; long (8 bytes, %ld);

							float (4 bytes, %f) ; double (8 bytes, %lf); 
							
						****	the value is between [-2^(nb-1) , 2^(nb-1)-1]	*****
						
						
						
						unsigned int (4 bytes, %u) ;
						
						****	the value is between [0 , 2^(nb)-1]	*****
						
						
						
						{%.2f, %.2lf}  
						
						{%5s ==> 5 space befor our string ,
						
						%-5s ==> 5 space after our string}
						
	
	*const char name[]="MUSTAPHA";
	
					**************************************************************************
					
	*fgets: the input alwayse end with '\n'
	
					**************************************************************************
	
	*arguments vs parametres 
		
		parametre : is the input when we declar a function;
		
		argument: is the input when we run a function;
		
					
					**************************************************************************		
	
	* 2D array :
	
	
		int rows = sizeof(array)/sizeof(array[0]);
		
		int columns = sizeof(array[0])/sizeof(array[0][0]);
		
					**************************************************************************
	*function , array   :
	
		!!!!	void my_function(int array[], int size);
		
		!!!!	void my_function(int *p, int size);
		
					**************************************************************************
	
	
	*pointer:
				*********
				*	*
				*   p	*
		char *p;  	*	*
				*********
				   &p
	
	
				*********
				*	*
				*  s[0]	*
		char s[];  	*	*
				*********
				s == &s[0]
	
	
	
				*********
				*	*
				* &s[0]	*
		p=s;	  	* 	*		*p=s[0];
				*********
				   &p
					
						
						++++++++++++++++++++++++++++++++++++++++++++++++++++++
						+	*(p+i) == p[i];        s+i == &s[i];	     +
						++++++++++++++++++++++++++++++++++++++++++++++++++++++

					
					
					**************************************************************************	
	
	*typedef:
	
	
		example: ________________________________________	________________________________________
								  _
				typedef char user[25];		  _		typedef struct{
								  _			
				int main(){			  _			char name[n];	
					.....			  _			int age
					user person1="Bro";	  _		} Player;
					......			  _
					.....			  _		int main(){
				}				  _			......
								  _			Player p1={"Amin",18};
								  _			
								  _			Player p2.name="Aziz";
								  _	 		Player p2.age=24;
								  _			
								  _			........
								  _		}
			________________________________________	________________________________________	
					
	
					**************************************************************************
					
	*array of struct:
	
	
			struct Students{				+		int main(){
									+			
				char name[20];				+			struct Students s1 = {"student1",18,"6273646"};
				int age;				+			struct Students s2 = {"student2",20,"6273748"};
				char tel[50];				+
									+			struct Students s[]= {s1,s2};
			}						+
									+			for(int i=0 ; i<sizeof(s)/sizeof(s[0]) ;i++){
									+				
									+				printf("the name of s%i\n",i+1,s[i].name);
									+				
									+			}			
												
												
												
					**************************************************************************
					
					
	*enm :
	
	
			enum Color={ REED , BLACK , GREE};
			
			enum Color my_color = BLACK ;
			
			printf("%d\n",my_color); // 2
			

					**************************************************************************
					
	*RANDOM
			/*
			#include<time.h>
			
			int main(){
				srand(time(0));
			}
			
			*/
			
			//int
			
			int n = rand()%(MAX -MIN + 1) + MIN  [ MIN , MAX ];
			
			//char || string
			
			char s[length];
			for(int i=0 ; i < length ; i++){
				
				s[i]=rand()%('z'-'a'+1) + 'a';
			}

		
					**************************************************************************	
			
	*bitwise operators	( & (AND) ; | (OR); ^ (XOR) ; << (left shift) ; >> (right shift))
	
			int a, b;
			
			a & b ,  a | b  , a^b , a << n (a*2^n)  ,  a >> n  (a/2^n)
			
			
					**************************************************************************
					
					
	*file:
	
									FILE *pf;
				
				    ++++++++++++++++++++++++++++++				+++++++++++++++++++++++
				    + write("w") and update("a") +				+	read	      +
				    ++++++++++++++++++++++++++++++				+++++++++++++++++++++++
	    
				*pf=fopen( name_file , "w");					char buffer[255];
				
				or								*pf=fopen( name_file , "r");
				
				*pf=fopen( name_file , "a");					fgets(buffer, sizeof(buffer), pf);
				
				fputs(msg ,pf);	
												or							
				fprintf( pf,msg );		
												while(fgets(buffer, sizeof(buffer), pf) != NULL ){
												
													printf("%s\n",buffer);
												}
												
									fclose(pf);
									// remove(name_file);	
									
					**************************************************************************	
	*continue / break:
	
	
	      ->for(..;..;..){						for(..;..;..){
	      +		.........						.........
	      +		.........						.........
	      +	
	      +							      +++++++++++++break;				
	      ++++++++++++ continue;				      +		.........
			.........				      +  }
			.........				      +	
		}						      ++++>	
	
		
		
		
					**************************************************************************	
									
	*other:
	
		int *function(int n){					+		n = n*10 + ( s[i] - '0');
			int *v=malloc(n*sizeof(int));			+				int
			.......						+
			.......						+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
				v[i]					+
			.......						+		for(int l=0; array[l] ; l++);  // l = length of array
			.......						+
									+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			return v;					+
		}							+		int a = atoi(argv[1]);
									+
		int *p;							+		float b =atof(argv[1]);
									+
		p=function(5);						+
									+
		for(int i=0;i<5;i++){					+
			printf("%i",p[i])				+
		}							+
									+
		free(p);					
			
