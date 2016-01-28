// r1 = v2 合法，r1是一个普通引用，v2的顶层const被忽略
// p1 = p2 不合法，p1是普通指针，而p2是底层const
// p2 = p1 合法，允许将一个int*转换成const int *
// p1 = p3 不合法，p3是一个底层const
// p2 = p3 合法
