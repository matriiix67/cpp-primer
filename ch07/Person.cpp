//
// Created by Bourne on 2018/3/20.
//

#include "Person.hpp"

#include <iostream>

Person::Person(std::string& n) : name_(n) {}
Person::Person(std::string& n, std::string& a) : name_(n), address_(a) {}


std::istream& read(std::istream& is, Person& person)
{
    is >> person.name_ >> person.address_;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name_ << " " << person.address_ << " ";
    return os;
}