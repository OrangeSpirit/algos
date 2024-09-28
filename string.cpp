#include <iostream>

int main() {
  const char *a;
  a = "slon";
  std::cout << " a = " << a << std::endl;
  a = "burbon";
  std::cout << " a = " << a << std::endl;
  a = "-U 1 2 3 4 5 6 7 8 9 0 &&";
  std::cout << " a = " << a << std::endl;
  std::cout << " &a = " << &a << std::endl;
  std::cout << " *a = " << *a << std::endl;
  std::cout << " *(a + 1) = " << *(a + 1) << std::endl;
  for (int i = 1; i < 30; i++) {
    std::cout << " *(a++) = " << *(a++) << std::endl;
  }
}