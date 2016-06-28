#include <string>
using namespace std;

typedef string Type;
Type initVal(); // use `string`
class Exercise {
public:
    typedef double Type;
    Type setVal(Type); // use `double`
    Type initVal(); // use `double`
private:
    //typedef double Type;
    int val;
};

Type Exercise::setVal(Type parm) {  // first is `string`, second is `double`  所以报错
    val = parm + initVal();     // Exercise::initVal()
    return val;
}
