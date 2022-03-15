#pragma once

#include <iostream>
#include "Forme.h"

class Cercle : public Forme{
  private:
    int rayon;

  public:
    /* Constructeur d'un cercle de centre p1 et de rayon r*/
    Cercle(Point *p1, int r);
    Cercle(Point *p1);

    /* Méthodes virtuelles héritées : obligation de les redéfinir */
    float perimetre();
    float surface();

    /* Surcharge de l'opérateur << */
    friend ostream& operator<<(ostream& os, const Cercle &rec);

    Point* getPtrPoint() {return this->p1;}
};