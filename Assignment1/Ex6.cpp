
#include <iostream>
#include "ex6move.h"



using namespace std;
Move::Move(double a, double b) {
  x = a;
  y = b;
}

void Move::showmove() const {
  cout << "x is " << x << "\t"
       << "y is " << y << endl;
}

Move Move::add(const Move & m) const {
  double newx = this->x + m.x;
  double newy = this->y + m.y;
  Move mo = Move(newx, newy);
  return mo;
}

void Move::reset(double a, double b) {
  x = a;
  y = b;
}

int main() {
  Move mo;
  cout << "initial move object:\n";
  mo.showmove();
  cout << "reset x=1,y=2:\n";
  mo.reset(1,2);
  mo.showmove();
  cout << "add x by 3, and y by 4:\n";
  Move mo2(3,4);
  mo = mo.add(mo2);
  mo.showmove();
  return 0;
}
