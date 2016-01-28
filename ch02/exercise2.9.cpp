#include <iostream>

int main(int argc, char *argv[])
{
    // (a)
    int input_value;
    std::cin >> input_value;

    // (b)
    double salary, wage;
    salary = wage = 9999.99;
    
    return 0;
}

// (a) 编译报错：expected primary-expression before ‘int’
// 修改方式请看上面

// (b) 用初始化列表使用double类型初始化int存在丢失信息的风险，编译器会报错，修改为 int i = 3.14; / int i(3.14) / double i = {3.14};

// (c) wage为定义

// (d) 正确，但是3.14会被截断为3，可以修改为：double i = 3.14;
