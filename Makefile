Makefile : 
all: prime bouncy sum 

handin : tar -czvf lab3.tar.gz *.c *.h Makefile 

prime: prime.c 
	gcc prime.c -o prime -lm 

bouncy: bouncy.c 
	gcc bouncy.c -o bouncy -lm 

sum: sum.c 
	gcc sum.c -o sum -lm 

clean: 
	$(RM) prime bouncy sum
