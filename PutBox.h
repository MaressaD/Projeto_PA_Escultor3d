#ifndef PUTBOX_H
#define PUTBOX_H
#include "Figurageometrica.h"
#include <iostream>

class PutBox : public Figurageometrica {
private:
  int x0, x1, y0, y1, z0, z1;
  float r, g, b, a;

public:
  PutBox(int x0, int x1, int y0, int y1, int z0, int z1,  float r, float g,float b, float a);
  ~PutBox();
  void draw(Sculptor &s);
};

#endif