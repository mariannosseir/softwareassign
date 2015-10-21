#ifndef Person_H_
#define Person_H_

#include <string>
#include <iostream>
#include "ex2Person.h"
#include <cstring>
using std::string;
using std::cout;
using std::endl;

class Person {
 private:
  static const int LIMIT = 25;
  string lname; // Person’s last name
  char fname[LIMIT]; // Person’s first name
 public:
  Person() {lname = ""; fname[0] = '\0'; } // #1
  Person(const string & ln, const char * fn = "Heyyou"); // #2
  // the following methods display lname and fname
  void Show() const; // firstname lastname format
  void FormalShow() const; // lastname, firstname format
};

#endif

Person::Person(const string & ln, const char * fn /* = "Heyyou" */) {
  lname = ln;
  strcpy(fname, fn); // copying the string fn in the char array fname
};

void Person::Show() const {
  std::cout << *fname << " " << lname << std::endl; 
};

void Person::FormalShow() const {
  std::cout << lname << ", " << *fname << std::endl; 
};

int main() {
  Person one; // use default constructor
  Person two("Smythecraft"); // use #2 with one default argument
  Person three("Dimwiddy", "Sam"); // use #2, no defaults
  one.Show();
  cout << endl;
  one.FormalShow();
  // etc. for two and three
  two.Show();
  two.FormalShow();
  
  cout << endl;
  three.Show();
  three.FormalShow();
  cout << endl;

  return 0;
}
