#pragma once

#include <iostream>
#include "Forme.h"

class Rectangle : public Forme{

private : 
  int largeur;
  int longueur;

public : 
  Rectangle(Point *p, int largeur, int longueur);
  int getLargeur(){return this->largeur; }
  int getLongueur(){return this->longueur;}
  friend ostream& operator<<(ostream& os, const Rectangle &rec);
  float perimetre();
  float surface();
};