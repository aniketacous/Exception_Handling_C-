CFLAGS = -c -I$(HOME)/Programming/include
LFLAGS = -L$(HOME)/Programming/lib
LIBS = -ldataStructures

libdataStructures.a: exceptions.o
	ar r libdataStructures.a exceptions.o
	ranlib libdataStructures.a

exceptions.o: ../src/exceptions.cc
	g++ $(CFLAGS) ../src/exceptions.cc

