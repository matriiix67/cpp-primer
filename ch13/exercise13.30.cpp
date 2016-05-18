#include <string>

class HasPtr{
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);     

public:
	HarPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& rhs) : ps(new std::string(*rhs.ps), i(rhs.i) {}
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr();

    void show() const
    {
        std:: cout << *ps << std::endl;
    }
private:
    std::string *ps;
    int i;
  
};


HasPtr& HasPtr::operator=(HasPtr rhs)
{
    this.swap(tmp);
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
    
bool HasPtr::operator<(HasPtr &lhs, HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}
