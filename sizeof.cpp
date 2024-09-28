#include <iostream>

struct Big_data {
  int a;
  int b;
  double c;
  long long int d;
};

int main() {
  int a = 100;
  double b = 0.5;
  char c = 'C';
  bool d = true;
  Big_data f;
  std::cout << "sizeof(a int) = " << sizeof(a) << std::endl;
  std::cout << "sizeof(b double) = " << sizeof(b) << std::endl;
  std::cout << "sizeof(c char) = " << sizeof(c) << std::endl;
  std::cout << "sizeof(d bool) = " << sizeof(d) << std::endl;
  std::cout << "sizeof(f struct) = " << sizeof(f) << std::endl;

  std::cout << "sizeof(a int*) = " << sizeof(int*) << std::endl;
  std::cout << "sizeof(b double*) = " << sizeof(double*) << std::endl;
  std::cout << "sizeof(c char*) = " << sizeof(char*) << std::endl;
  std::cout << "sizeof(d bool*) = " << sizeof(bool*) << std::endl;
  std::cout << "sizeof(f struct*) = " << sizeof(Big_data*) << std::endl;

  std::cout << "sizeof(__int128_t) = " << sizeof(__int128_t) << std::endl;
  std::cout << "sizeof(__int64_t) = " << sizeof(__int64_t) << std::endl;
  return 0;
}