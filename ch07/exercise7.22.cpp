#include <string>
#include <iostream>

class Person
{
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);

public:
    Person() = default;
    Person(const std::string &n, const std::string &a) : name(n), address(a) {}
    std::string const& getName()    const { return name; }
    std::string const& getAddress() const { return address; }

private:
    std::string name;
    std::string address;
};


std::istream &read(std::istream &is, Person &person)
{
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    return os << person.name << " " << person.address;

}
