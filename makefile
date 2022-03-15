#Makefile
#Created by Corentin and Rémy 15/03/2022

mainClasses.out : mainClasses.o Point.o Forme.o Rectangle.o Cercle.o ListeFormes.o
	g++ -o out/mainClasses.out out/mainClasses.o out/Point.o out/Forme.o out/Rectangle.o out/Cercle.o out/ListeFormes.o

mainClasses.o : mainClasses.cpp
	g++ -c mainClasses.cpp -o out/mainClasses.o

Point.o : Point.cpp
	g++ -c Point.cpp -o out/Point.o

Forme.o : Forme.cpp
	g++ -c Forme.cpp -o out/Forme.o

Rectangle.o : Rectangle.cpp
	g++ -c Rectangle.cpp -o out/Rectangle.o

Cercle.o : Cercle.cpp
	g++ -c Cercle.cpp -o out/Cercle.o

ListeFormes.o : ListeFormes.cpp
	g++ -c ListeFormes.cpp -o out/ListeFormes.o

