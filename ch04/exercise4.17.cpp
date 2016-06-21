++i will increment the value of i, and then return the incremented value.
    i = 1;
j = ++i;
(i is 2, j is 2)
i++ will increment the value of i, but return the original value that i held before being incremented.
    i = 1;
j = i++;
(i is 2, j is 1)
For a for loop, either works. ++i seems more common, perhaps because that is what is used in K&R.

    In any case, follow the guideline "prefer ++i over i++" and you won't go wrong.

There's a couple of comments regarding the efficiency of ++i and i++. In any non-student-project compiler, there will be no performance difference. You can verify this by looking at the generated code, which will be identical.

    The efficiency question is interesting... here's my attempt at an answer: Is there a performance difference between i++ and ++i in C?

As On Freund notes, it's different for a C++ object, since operator++() is a function and the compiler can't know to optimize away the creation of a temporary object to hold the intermediate value.
