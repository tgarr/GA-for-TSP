
CC=g++
CCFLAGS=-std=c++11 -O2

all: eax

eax: main.cpp cross.o environment.o evaluator.o indi.o kopt.o randomize.o sort.o
	$(CC) $(CCFLAGS) $^ -o $@

clean:
	rm -f *.o

%.o: %.cpp %.c
	$(CC) $(CCFLAGS) -c $< -o $@

