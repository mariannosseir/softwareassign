#ifndef ex1BankAccount_H_
#define ex1BankAccount_H_

#include <string>
#include <iostream>
#include "ex1BankAccount.h"
using std::string;

class BankAccount {
 private:
  string name;
  string number;
  double balance;

 public:
  BankAccount();
  BankAccount(const string & nam, const string & num, double bal);
  void show();
  void deposite(double n);
  void withdraw(double n);
  ~BankAccount();
};


#endif

BankAccount::BankAccount() {
  std::cout << "Default constructor called\n";
  name = "no name";
  number = "0";
  balance = 0.0;
}

BankAccount::BankAccount(const string & nam, const string & num, double bal) {
  std::cout << "Constructor using " << nam << " called\n";
  name = nam;
  number = num;
  balance = bal;
}

BankAccount::~BankAccount() {
  std::cout << "Bye, " << name << "!\n";
}

void BankAccount::show() {
  std::cout << "Depositor's name\t" << name << std::endl
	    << "Account number\t" << number << std::endl
	    << "Balance\t" << balance << std::endl;
}

void BankAccount::deposite(double n) {
  balance += n;
}

void BankAccount::withdraw(double n) {
  balance -= n;
}

// short example
int main() {
  using std::cout;

  cout << "Creating objects using constructos" << std::endl;
  BankAccount b1("JNU", "234", 12345.0);
  b1.show();

  BankAccount b2=BankAccount("SCAU", "0123", 23456.0);
  b2.show();

  cout << "Deposite money to b1" << std::endl;;
  b1.deposite(100.2);
  b1.show();

  cout << "withdraw money from b2" << std::endl;;
  b2.withdraw(50.1);
  b2.show();

  return 0;
}



