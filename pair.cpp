#include <iostream>

struct pair_struct {
  int a = 0;
  int b = 0;
};

pair_struct pair_multipul(pair_struct A) {
  pair_struct result;
  result.a = A.a * A.a;
  result.b = A.b + A.b;
  return result;
}

int main() {
  pair_struct A;
  A.a = 5;
  A.b = 7;
  std::cout << "A.a = " << A.a << "     A.b = " << A.b << std::endl;
  pair_struct B = pair_multipul(A);
  std::cout << "B.a = " << B.a << "     B.b = " << B.b << std::endl;
  A = B;
  std::cout << "A.a = " << A.a << "     A.b = " << A.b << std::endl;
  return 0;
}
