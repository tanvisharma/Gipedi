all: main
main: main.o matchstring.o 
	g++ main.o matchstring.o -o main
	
main.o:
	g++ -c main.cpp
	
matchstring.o: matchstring.cpp
	g++ -c matchstring.cpp	