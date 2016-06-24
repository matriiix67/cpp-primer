#include <string>

class Persion{
private:
    std::string name;
    std::string address;

public:
    std::string getName() const { return name; }
    //auto getAddress2() -> std::string const { return address; }
    std::string getAddress() const { return address; }
};

// 应该为const，因为不会改变成员变量。
