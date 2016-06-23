string （& func(string (&arrStr)[10]))[10];

using ArrT = string[10]; // typedef string ArrT[10];
Arrt& func(ArrT& arrStr);

auto func(ArrT& arrStr) -> string(&)[10];

string arrS[10];
decltype(arrS)& func3(ArrT& arr);
