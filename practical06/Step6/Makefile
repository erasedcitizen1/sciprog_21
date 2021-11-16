# set the macros: gcc as compiler, use-O3 compiling option and -lm for maths library
CC=gcc
CCFLAGS=-O3
LDFLAGS=-lm


# set up the dependencies: mmc depends on main.o and mm.o which then depend on mm.c and main.c etc

all: mmc
mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mmc main.o mm.o $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c


# remove executables after code is compiled
clean:
	rm *.o
