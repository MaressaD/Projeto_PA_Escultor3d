#include "PutBox.h"
PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g,float b, float a) {
  this->x0 = x0;
  this->x1 = x1;
  this->y0 = y0;
  this->y1 = y1;
  this->z0 = z0;
  this->z1 = z1;
  this->r = r;
  this->g = g;
  this->b = b;
  this->a = a;
}
PutBox::~PutBox() {}
void PutBox::draw(Sculptor &s) {
  s.setColor(r, g, b, a);
  int i, j, k;
  for (i = x0; i < x1 + 1; i++) {
    for (j = y0; j < y1 + 1; j++) {
      for (k = z0; k < z1 + 1; k++) {
        s.putVoxel(i, j, k);
      }
    }
  }
}