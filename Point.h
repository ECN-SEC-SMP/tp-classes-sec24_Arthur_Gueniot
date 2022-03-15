#pragma once

#include <iostream>

class Point {
  private:
  int abscisse;
  int ordonnee;
  
  public:
  /* Déclaration des méthodes public */
  void translater(int abs,int ord);
  void translater (const Point &p);

  /* Constructeur */
  Point();
  Point(int x, int y);
  Point(const Point &p);

  /* Accesseur (getter) */
  int getAbscisse() const;
  int getOrdonne() const;

  /* Mutateur (setter) */
  void setAbscisse(int x);
  void setOrdonnee(int y);
};
