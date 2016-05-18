#include<string>
#include<iostream>

int main()
{
  std::cout << "how long do want the strings: ";
  int size(0);
  std::cin >> size;
  char* input = new char[size + 1]();
  std::cout << "input the strings:";
  std::cin.get(input, size + 1);
  std::cout << input;
  delete []input;

  return 0;
}

