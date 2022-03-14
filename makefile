#Makefile
#Created by Corentin and Rémy 15/03/2022

mainClasses.out : mainClasses.o Point.o
	g++ -o out/mainClasses.out out/mainClasses.o out/Point.o

mainClasses.o : mainClasses.cpp
	g++ -c mainClasses.cpp -o out/mainClasses.o

Point.o : Point.cpp
	g++ -c Point.cpp -o out/Point.o