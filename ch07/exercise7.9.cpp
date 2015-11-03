#include<string>
#include<iostream>

class Person
{
public:
  std::string getName() { return name; }
  std::string getAddress() { return address; }
     
public: // temporary ，it must be private;
  std::string name;
  std::string address;
};

istream &read(istream &is, Person &person)
{
  is >> person.name >> person.address;
  return is;
}


ostream &print(ostream &os, const Person &person)
{
  os << "name: " << person.name << ", address: " << person.address << endl;
  return os;
}
