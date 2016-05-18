#include <string>

class HasPtr{
public:
	HarPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& rhs) : ps(new std::string(*rhs.ps), i(rhs.i) {}
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr();
private:
    std::string *ps;
    int i;
  
};


HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	auto newp = new string(*rhs.ps);
	delete ps;
	ps = newp;
	i = rhs.i;
	return *this;
}


HasPtr::~HasPtr()
{
	delete ps;
}
    
