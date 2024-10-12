#include <iostream>

int& quadro() {
  int a = 11;
  int b = 11;
  int c = a * b;
  return c;
}

int main() {
  std::cout << quadro << std::endl;

  return 0;
}