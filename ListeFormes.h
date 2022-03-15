#pragma once

#include <iostream>
#include <vector>
#include "Forme.h"

class ListeFormes{

  private :
    std::vector<Forme*> *listeformes;
  public :
    ListeFormes(){ listeformes = new vector<Forme*>(); }
};