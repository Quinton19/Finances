all: test
rebuild: clean main

main: date.o entity.o transaction.o
	g++ date.o entity.o transaction.o

test: date.o entity.o test.o transaction.o
	g++ date.o entity.o test.o transaction.o

test.o: test.cpp Entity.h Date.h
	g++ -c test.cpp
date.o: Date.cpp Date.h
	g++ -std=c++11 -c Date.cpp
entity.o: Entity.cpp Entity.h
	g++ -c Entity.cpp
transaction.o: Transaction.cpp Transaction.h
	g++ -c Transaction.cpp

clean:
	rm -f *.o a.out a.exe