all: driver1.o
	gcc driver1.o

driver1.o: driver1.c
	gcc -c driver1.c

run:
	./a.out

clean:
	rm *.o
	rm newfile.txt
