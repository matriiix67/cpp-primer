#include <string>

class Employee{
public:
  
  Employee();
  Employee(const std::string name);
  Employee(const Employee& rhs) = delete;
  Employee& operator=(const Employee& rhs) = delete;
  ~Employee() = default;
  
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


