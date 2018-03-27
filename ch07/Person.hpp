//
// Created by Bourne on 2018/3/20.
//

#ifndef CPP_PRIMER_PERSON_HPP
#define CPP_PRIMER_PERSON_HPP

#include <string>
#include <iostream>

class Person {
    friend std::istream& read(std::istream& os, Person& person);
    friend std::ostream& print(std::ostream& is, const Person& person);

public:
    Person() = default;
    Person(std::string&);
    Person(std::string&, std::string&);
    Person(std::istream& is) { read(is, *this); }

    std::string get_name() { return name_; }
    std::string get_address() {return address_; }


private:
    std::string name_;
    std::string address_;
};

std::istream& read(std::istream& os, Person& person);
std::ostream& print(std::ostream& is, const Person& person);


#endif //CPP_PRIMER_PERSON_HPP
