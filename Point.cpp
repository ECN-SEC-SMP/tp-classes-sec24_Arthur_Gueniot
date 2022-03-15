/**
* File : Point.cpp
* Date : 15/03/2022
* Définition des classes de gestion d'un point
*/
#include <iostream>
#include "Point.h"

using namespace std;

/* Constructeurs de la classe point avec param par défaut */
Point::Point(){
  this->abscisse = 0;
  this->ordonnee = 0;
}

/* Constructeur de la classe point avec deux paramètres d'origine  */
Point::Point(int x, int y){
  this->abscisse = x;
  this->ordonnee = y;
}
/*constructeur de recopie*/
Point::Point(const Point &p){
  this->abscisse = p.abscisse;
  this->ordonnee = p.ordonnee;
}

/* Définition de la fonction translater() */
void Point::translater(int abs,int ord){
  this->abscisse += abs;
  this->ordonnee += ord;
}

/*Surcharge de la fonction translater dans le cas d'une utilisation d'un point en param*/
void Point::translater(const Point &p){
  this->abscisse += p.abscisse;
  this->ordonnee += p.ordonnee;
}

/* Définition des GETTER */
int Point::getAbscisse() const{
  return this->abscisse;
}

int Point::getOrdonne() const{
  return this->ordonnee;
}

/* Définition des SETTER */
void Point::setAbscisse(int x){
  this->abscisse = x;
}

void Point::setOrdonnee(int y){
  this->ordonnee = y;
}