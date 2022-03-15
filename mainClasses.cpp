#include <iostream>
#include "Point.h"
#include "Forme.h"
#include "Rectangle.h"
#include "Cercle.h"

using namespace std;

int main() {
  /* Déclaration des variables */
	Point p1;
  Point p2(3,5);
  Point p3(p2);

  
  /* Test  des fonctions Getter et vérification des getter */
  // cout << "Abscsisse P1: "<< p1.getAbscisse() << endl;
  // cout << "Ordonnée P1: "<< p1.getOrdonnee() << endl;
  
  // cout << "Abscsisse P2: "<< p2.getAbscisse() << endl;
  // cout << "Ordonnée P2: "<< p2.getOrdonnee() << endl;
  
  /* Test de CRÉATION D’UNE CLASSE POINT */
  // /* Translater P1 de P2 */
  // cout << "Translater P1 de P2" << endl;
  // p1.translater(p2);
  // cout << "Abscsisse P1: "<< p1.getAbscisse() << endl;
  // cout << "Ordonnée P1: "<< p1.getOrdonnee() << endl;
  
  // /* Translater P1 de coordonnées réelles */
  // cout << "Translater P1 de (2,3)" << endl;
  // p1.translater(2,3);
  // cout << "Abscsisse P1: "<< p1.getAbscisse() << endl;
  // cout << "Ordonnée P1: "<< p1.getOrdonnee() << endl;

  /* Test de 2 SURCHAGE D’OPÉRATEURS */
  /* Test surcharge opérateur += et << */
  p1 += p2;
  // cout << p1 << endl;

  /* Test de 4 FORMES GÉOMÉTRIQUES CONCRÈTES */
  /* Test rectangle */
  Rectangle rec(&p1,10,20);
  cout<<rec<<endl;

  /* Test de Cercle */
  Cercle rond(&p2, 3);
  cout << rond << endl;

  rond.getPtrPoint()->translater(5,6);
  cout << rond << endl;
  
  return 0;
}