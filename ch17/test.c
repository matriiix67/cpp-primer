//
// Created by Bourne on 29/03/2018.
//

#include <stdio.h>

void output(int i, int j) {
    printf("i= %d, j = %d\n", i, j);
}

int main(int argc, char* argv[]) {
    int a[3] = {0, 1, 2};
    printf("%d\n", sizeof(a));    // 数组大小
    printf("%d\n", sizeof(&a));   // 指针大小
    printf("%d\n", *(a + 1));     // 输出第二个元素

//    int i = 0;
//    output(i++, i); // 0, 1
//
//    i = 0;
//    output(++i, i); // 1, 1
//
//    i = 0;
//    output(i, ++i); // 0, 1
//
//    i = 0;
//    output(i, i++); // 0, 0


    int i = 0;
    int x = (++i)++; // 1， 在最近的编译器中，这些操作都不被允许，会编译错误
    printf("%d\n", x);

    //x = ++(i++); // ++得到的是一个右值，++操作需要的是一个左值。i++返回的是一个右值，不对再++了

    char j = 0;
    (int)j = 20;  // assignment to cast is illegal, lvalue casts are not supported
    printf("%d\n", j);


    return 0;
}

