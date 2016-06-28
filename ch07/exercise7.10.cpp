// we can try to divide it like that:

std::istream &firstStep = read(cin, data1);
sdt::istream &secondStep = read(firstStep, data2);
if (secondStep)

// the condition of the if statement would read two Sales_data object at one time.
