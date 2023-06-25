build: link run

link:
	gcc -g test.c ky_initializer.c -o test.out

run:
	./test.out