#pragma once

#include <iostream>
#include "Point.h"

using namespace std;

class Forme { 
  private :
    Point *p1;

  public :
    Forme(Point *p1);

    /* Redéfinition de l'opérateur '+=' */
    void operator+=(Forme const&f1);
    
    /* Redéfinition de l'operateur << */
    friend ostream& operator<<(ostream& os, const Forme &f);

    virtual int perimetre()=0;
    virtual int surface()=0;
};