#pragma once

#include <iostream>

using namespace std;

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
  int getOrdonnee() const;

  /* Mutateur (setter) */
  void setAbscisse(int x);
  void setOrdonnee(int y);

  /* Redéfinitiond e l'opérateur '+=' */
  void operator+=(Point const&p1);

  /* operateur */
  friend ostream& operator<<(ostream& os, const Point& p);

};
