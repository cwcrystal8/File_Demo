all: driver.o
	gcc driver.o

driver.o: driver.c
	gcc -c driver.c

run:
	./a.out

clean:
	rm *.o
	rm newfile.txt
