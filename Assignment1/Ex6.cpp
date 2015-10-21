#ifndef MOVE_H_
#define MOVE_H_
#include <iostream>
#include "ex6move.h"

class Move {
 private:
  double x;
  double y;
 public:
  Move(double a = 0, double b = 0); // sets x,y to a,b
  void showmove() const; // shows current x, y values;
  Move add(const Move & m) const;
  // this function adds x of m to x of invoking object to get new x,
  // add y of m to y of invoking object to get new y, creates a new
  // move object initialized to new x, y values and returns it
  void reset(double a = 0, double b = 0); // resets x,y to a,b
};

#endif

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
