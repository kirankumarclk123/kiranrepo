abc.exe:big3.o main.o factorial.o palindrome.o reverse.o
	gcc -o abc.exe big3.o main.o factorial.o palindrome.o reverse.o

big3.o:big3.c
	gcc -c big3.c
factorial.o:factorial.c
	gcc -c factorial.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
reverse.o:reverse.c
	gcc -c reverse.c
clean:
	rm -rf *.o 
