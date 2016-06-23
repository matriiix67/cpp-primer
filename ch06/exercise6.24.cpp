// Arrays have two special properties that affect how we define and use
// functions that operate on arrays: We cannot copy an array, and when we use an
// array it is (usually) converted to a pointer.

// So we cannot pass an array by value, and when we pass an array to a function,
// we are actually passing a pointer to the array's first element.

// In this question, const int ia[10] is actually same as const int*, and the
// size of the array is irrelevant. we can pass const int ia[3] or
// const int ia[255], there are no differences. If we want to pass an array
// which size is ten, we should use reference like that:

void print10(const int (&ia)[10]) { /*...*/ }
// see more discusses at
// http://stackoverflow.com/questions/26530659/confused-about-array-parameters
