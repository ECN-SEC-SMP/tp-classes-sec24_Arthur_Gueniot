/**
* File : Cercle.cpp
* Date : 15/03/2022
* Définition des classes de gestion d'une forme
*/
#include <iostream>

#include "Cercle.h"

/* Définition de la méthode Cercle avec 2 paramètres */
Cercle::Cercle(Point *p1, int r) : Forme (p1), rayon(r) { }

/* Définition de la méthode Cercle avec 1 paramètre de point qui sera le centre du cercle et le rayon est défini à 1 par défaut */
Cercle::Cercle(Point *p1) : Forme(p1), rayon(1) { }

/* Définition de la méthode qui calcul le périmètre du cercle */
float Cercle::perimetre(){
  return (2 * 3.14 * this->rayon);
}

/* Définition de la méthode qui calcul la surface du cercle */
float Cercle::surface(){
  return (3.14 * this->rayon * this->rayon);
}

ostream& operator<<(ostream& os, const Cercle& cer){
  os << "Type Cercle, point du centre "<< *(cer.p1) << " rayon : "<< cer.rayon ;
  return os;
}

