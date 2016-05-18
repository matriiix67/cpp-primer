#include <string>

class HasPtr{
    friend void swap(HasPtr &, HasPtr &);
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


inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "call swap(HasPtr &lhs, HasPtr &rhs)" << std::endl;
}
