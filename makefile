PROGS = pilha
CC = gcc
CFLAGS = -Wall -g
objects = main.o libpilha.o aux.o

game: $(objects)
	$(CC) $(CFLAGS) $(objects) -o $(PROGS)

main.o: main.c libpilha.h
	$(CC) $(CFLAGS) -c main.c

libpilha.o: libpilha.c libpilha.h
	$(CC) $(CFLAGS) -c libpilha.c

aux.o: aux.c aux.h
	$(CC) $(CFLAGS) -c aux.c

clean:
	-rm -f *~ *.o

purge: clean
	-rm -f $(PROGS)