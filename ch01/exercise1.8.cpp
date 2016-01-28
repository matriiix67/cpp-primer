#include <iostream>

int main(int argc, char *argv[])
{
    //std::cout << "/*";
    //std::cout << "*/";
    //std::cout << /* "*/" */ ";
    std::cout << /* "*/" /* "/*" */;
    return 0;
}

#if 0
// std::cout << "/*"; 正确
// std::cout <, "*/"; 正确
// std::cout << /* "*/" */;  错误：缺少结尾的 " 字符， 在最后面增加双引号即可。
// std::cout << /* "*/" /* "/*" */;  正确，输出" /* " 
#endif
