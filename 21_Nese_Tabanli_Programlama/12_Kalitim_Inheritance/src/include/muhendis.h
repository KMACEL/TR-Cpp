#ifndef MUHENDIS_H
#define MUHENDIS_H

#include <iostream>
#include <string>
#include "calisan.h"

class Muhendis : public Calisan
{
protected:
  int avansVar;

public:
  Muhendis(string, string, string, string, int);
  ~Muhendis();
  void zam(int, int);
  int avans(int);
};

#endif
