#include <iostream>
using namespace std;

static int idgenerator = 1;

class numbered{
public:  
  numbered();
  numbered(numbered& rhs);
  
  //private:
  int mysn;
};

numbered::numbered(){
  mysn = idgenerator++;
}

numbered::numbered(numbered& rhs){
  mysn = idgenerator++;
}

void f(const numbered& s){
  cout << s.mysn << endl;
}

int main()
{
  numbered a, b = a, c = b;
  f(a);
  f(b);
  f(c);
}
