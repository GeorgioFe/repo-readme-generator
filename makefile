generator: main.o
	g++ main.o -o generator

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o generator