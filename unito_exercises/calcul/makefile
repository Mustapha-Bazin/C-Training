
calculation: main.o sum.o mult.o
	gcc -o calculation *.o
	
	
main.o: main.c
	gcc -c main.c
	
sum.o:sum.c
	gcc -c sum.c
	
mult.o: mult.c
	gcc -c mult.c
	
clean: 
	rm -f *.o
	
run:
	./calculation
	


