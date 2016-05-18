#include <string>

class Employee{
public:
  
  Employee();
  Employee(const std::string name);
  const int id() const {return id_;}

private:
  int id_;
  string name_
  static int s_increment;
  
};


int Employee::s_increment = 0;

Employee::Employee()
{
  id = s_increment;
}


Employee::Employee(const std::string &name)
{
  id_ = s_increment++;
  name_ = name;
}

int main()
{
  
  return 0;
}


