When the recursion termination condition becomes var != 0, two situations can happen :

case 1 : If the argument is positive, recursion stops at 0.(Note : There is one extra multiplication step though as the combined expression for factorial(5) reads 5 * 4 * 3 * 2 * 1 * 1. In terms of programming languages learning, such subtle difference probably looks quite trivial. In algorithms analysis and proof, however, this extra step may be super important.)
case 2 : if the argument is negative, recursion would never stop. As a result, a stack overflow would occur.
