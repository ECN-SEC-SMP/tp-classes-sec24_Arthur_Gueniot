#pragma once

#include <iostream>
#include "Point.h"

using namespace std;

class Forme { 
  protected :
    Point *p1;

  public :
    Forme(Point *p1);

    /* Redéfinition de l'opérateur '+=' */
    void operator+=(Forme const&f1);
    
    /* Redéfinition de l'operateur << */
    friend ostream& operator<<(ostream& os, const Forme &f);

    virtual float perimetre()=0;
    virtual float surface()=0;
    virtual ~Forme(){}
};
