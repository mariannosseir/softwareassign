#include <iostream>
#include <string>
#include "dbc.h"
#include "Dictionary.h"

using namespace std;



class Dictionary 
{
private:
	string names[100];
	string emails[100];
	int size;
public:
	Dictionary()
	{
		size =0;
	}
	void setname(string name, int i)
	{
		names[i] = name;
	}
	string getname(int i)
	{
		return names[i];
	}
	void setemail(string email, int i)
	{
		emails[i] = email;
	}
	string getemail(int i)
	{
		return emails[i];
	}
	void setsize(int newsize)
	{
		if(newsize>0)
			size = newsize;
		else
			cout<<"Invalid";
	}
	int getsize()
	{
		return size;
	}
	bool reqfunction(string name)
	{
		for(int i=0, i<getsize(),i++)
		{
			
			if(getname[i] != name)
				return true;
			else
				return false;
		}
	}
	bool nameensfunction(string name, int size)
	{
			if(getname[size] == name)
				return true;
			else
				return false;
	}
	bool emailensfunction(string email, int size)
	{
			if(getemail[size] == email)
				return true;
			else
				return false;
	}
	void Add(string name,string email)
	{
		int currentsize = getsize();
		
		INVARIANT0(int getsize() < 100);
		
		REQUIRE0(reqfunction(name));
		
		names[size] = name;
		emails[size] = email;
		size++;
		
		ENSURE0(nameensfunction(name, getsize()-1) && emailensfunction(email, getsize()-1));
		ENSURE0(int getsize() == currentsize + 1);
		
		INVARIANT0(int getsize() <= 100);
	}

	void Remove(string name)
	{
		INVARIANT0(int getsize() <= 100);
		
		REQUIRE0(!reqfunction(name))
		
		int indextoberemoved, currentsize = getsize();

		for(int i =0;i<getsize();i++)
		{
			if(names[i] == name)
			{
				indextoberemoved = i;
				break;
			}
		}
		setsize(getsize()-1);
		for(int i = indextoberemoved;i<getsize();i++)
		{
			names[i] = names[i+1];
			emails[i] = emails[i+1];
		}
		
		ENSURE0(getsize()>0);
		ENSURE0(getsize() = currentsize - 1)
		ENSURE0(!nameensfunction(name, indextoberemoved) && !emailensfunction(email, indextoberemoved));
		//to ensure name and email don't exist at indextoberemoved
		ENSURE0(reqfunction(name));
		//to ensure name and email don't exist at all
		
		INVARIANT0(int getsize() <= 100);
	}
	void printentries()
	{
		int currentsize = getsize();
		
		INVARIANT0(int getsize() <= 100);
		
		REQUIRE0(getsize()>0);
		
		for(int i =0;i<getsize();i++)
		{
			cout<<"Entry #"<<i+1<<":"<<endl<<names[i]<<": "<<emails[i]<<endl;
		}
		
		ENSURE0(getsize() == currentsize);
		
		INVARIANT0(int getsize() <= 100);
	}
};



void main()
{
	Dictionary x;
	x.Add("omar","omar@live.com");
	x.Add("hassan","hassan@live.com");
	cout<<"Before Deleting Hassan"<<endl;
	x.printentries();
	x.Remove("hassan");
	cout<<"After Deleting Hassan"<<endl;
	x.printentries();
}