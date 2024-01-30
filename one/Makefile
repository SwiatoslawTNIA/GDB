# debug: c.c
# 	gcc -w -g3 -o c c.c 

run: c
	./c
c: c.o
	gcc -o c c.o
c.o: c.c
	gcc -g3 -c c.c -w -o c.o
