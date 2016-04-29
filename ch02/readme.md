#第二章 变量和基本类型

---

#### decltype

希望从表达式的类型推断出要定义的变量的类型，但是不想用该表达式的值初始化变量，为了满足这一特性，C++11引入decltype，它的作用是选择并返回操作数的数据类型，在此过程中，编译器分析表达式并得到它的类型，却不实际计算表达式的值。

decltype处理顶层const和引用的方式与auto有些许不同。如果decltype使用的表达式是一个变量，则decltype返回该变量的类型。

const int ci = 0, &cj = ci;
decltype(cj) z; // 错误: z是一个引用，必须初始化
如果是cj是一个引用，decltype(cj)的结果就是引用类型，因此作为引用的z必须被初始化。
需要指出，引用从来都是作为其所指对象的同义词出现，只有用在decltype处是一个例外。

如果decltype使用的表达式不是一个变量，则decltype返回表达式结果对应的类型。
另外，如果表达式的内容是解引用操作，则decltype将得到引用类型。
decltype(*p)的结果类型是int&，而非int。

decltype和auto的另一处区别是，decltype的结果类型与表达式形式密切相关。比如：
decltype((variable))的结果永远是引用，而decltype(variable)结果只有variable本身就是一个引用时才是引用。

赋值是回产生引用的一类典型表达式，引用的类型就是左值的类型。也就是说，如果i是int，则表达式i = x的类型是int&。
