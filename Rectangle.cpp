/**
* File : Rectangle.cpp
* Date : 15/03/2022
* Définition des classes de gestion d'un rectangle
*/
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle( Point *p, int largeur, int longueur) : Forme(p), largeur(largeur),longueur(longueur) { }

ostream& operator<<(ostream& os, const Rectangle &rec){
  os << "Type Rectangle, point du centre "<< *(rec.p1) << " largeur : "<<rec.largeur<<" longueur : "<<rec.longueur ; //on dereference rec.p1 pour que la méthode ostream << de point qui attend un contenu et donc pas une adresse, recoive bien un contenu. Sans * devant rec.p1, on envoi un pointeur et donc la méthode << de point n'est pas appelé (car elle attend un contenu)
  return os;
}

float Rectangle::perimetre(){
  return (2*(this->largeur + this->longueur));
}
float Rectangle::surface(){
  return (this->largeur * this->longueur);
}