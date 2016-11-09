#	Author: John Gibbons
#	Date: 2016.10.26
#	Additions: Logan Ayer
#	Date: 2016.11.2


eecs448-lab06: main.o Test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Test.o -o eecs448-lab06


main.o: main.cpp Test.h
	g++ -g -Wall -std=c++11 -c main.cpp


Test.o: Test.cpp Test.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c Test.cpp


#DON'T delete LinkedList.o!
clean:
	rm main.o Test.o *.*~ eecs448-lab06
