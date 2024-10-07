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

  char stroka[] = "long string for sample";
  int l = sizeof(stroka);
  std::cout << "int l = " << l << std::endl;

  int i = 0;
  while (stroka[i]) {
    std::cout << (int)stroka[i] << ' ';
    i++;
  }
  std::cout << std::endl;

  i = 0;
  while (stroka[i]) {
    std::cout << stroka[i];
    i++;
  }
  std::cout << std::endl;

  for (int j = 0; j < 256; j++) {
    std::cout << j << " = " << (char)j << std::endl;
  }

  return 0;
}