#include<string>
#include<iostream>

class Person
{
  friend istream &read(istream &is, Person &person);
  friend ostream &print(ostream &os, Person &person);
  
public:
  Person() = default;
  Person(std::string name) : name_(name) {}
  Person(std::string name, std::string address) : name_(name), address_(address) {}
  std::string getName() { return name; }
  std::string getAddress() { return address; }

private:
  std::string name_;
  std::string address_;
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
