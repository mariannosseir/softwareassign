##Question 1:
#####A class is the definition of a type created by the user. Its declaration shows how the class data is sorted and which functions can be used to access this data or change it.

##Question 2:
#####**Abstraction**: The operations that you can perform on a class object are written in a public interface of the class methods. **Data hiding**: Private visibility can be used ( default ) for data members, The data can only be accessed through member functions. **Encapsulation**: Data representation and method codes and other details of implementations are hidden.**

##Question 3:
#####The class is like a standard type and the object is like a variable of that type. A class defines a type and how we use it, an object is a variable which we create and use according to its class definition.

##Question 4:
#####Each object has its own set of data members, but all the objects use the one set of member functions. Methods (member functions) are public and data members are private.

##Question 5:

		#include <cstring>
		using namespace std;
		class BankAcc {
		private:
			string name;
			string num;
			double balance;
		public:
			BankAcc(const string & cli, const string & accnu, double ba = 0.0);
			void show() const;
			void deposit(double cash);
			void withdraw(double cash);
		};

##Question 6:
#####Class constructor is called when object of that class is created or when we call the constructor explicitly. A destructor is called when the object finishes or expires.

##Question 7:

		BankAcc::BankAcc(const string & cli, const string & accnu, double ba) {
			name = client;
			num = acccnum;
			balance = bal;
		}

##Question 8:
#####Default constructor has no arguments or has defaults for all the arguments. When we have default constructor, we can declare objects without initializing them and we can declare arrays, even if we already defined an initializing constructor.

##Question 9:

		#ifndef STOCK20_H_
		#define STOCK20_H_
		class Stock {
		private:
			std::string company;
			long shares;
		    double share_val;
		    double total_val;
		    void set_tot() { total_val = shares * share_val; }
		public:
		    Stock();            
			Stock(const std::string & co, long n, double pr);
		    ~Stock() {}         
		    void buy(long num, double price);
		    void sell(long num, double price);
		    void update(double price);
		    void show() const;
		    const Stock & topval(const Stock & s) const;
			long numshares() const { return shares; }
		    double shareval() const { return share_val; }
			double totalval() const { return total_val; }
		    const string & co_name() const { return company; }
		}

##Question 10:
#####**“This Pointer”** is used with class method to point to the object used to call the method. **“This”** is the address of the object and “This Pointer” is the object itself.



