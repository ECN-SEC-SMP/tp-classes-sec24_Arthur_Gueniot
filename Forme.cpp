/**
* File : Forme.cpp
* Date : 15/03/2022
* Définition des classes de gestion d'une forme
*/
#include <iostream>
#include "Forme.h"

Forme::Forme(Point *p1){
  this->p1 = p1;
}

void Forme::operator+=(Forme const&f1){
  this->p1->setAbscisse(f1.p1->getAbscisse());
  this->p1->setOrdonnee(f1.p1->getOrdonnee());
}

ostream& operator<<(ostream& os, const Forme &f){
  os << "abscisse : "<< f.p1->getAbscisse() << " ordonnee : " << f.p1->getOrdonnee();
}