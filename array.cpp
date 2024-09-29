#include <iostream>

int main() {
  int A[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 21};
  int* p = A;
  std::cout << "int* p = " << p << std::endl;
  std::cout << " A = " << A << std::endl;

  std::cout << " A[4] = " << A[4] << std::endl;
  std::cout << " *(p + 4) = " << *(p + 4) << std::endl;

  std::cout << " p + 4 = " << p + 4 << std::endl;

  std::cout << " A[6] = 6[A] = " << 6[A] << std::endl;

  return 0;
}