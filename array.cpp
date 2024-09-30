#include <iostream>

int main() {
  int N = 10;
  int A[N] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 21};
  int B[N];

  for (int i = 0; i < N; i++) {
    B[N - i - 1] = A[i];
  }

  int* p = A;
  std::cout << "int* p = " << p << std::endl;
  std::cout << " A = " << A << std::endl;

  std::cout << " A[4] = " << A[4] << std::endl;
  std::cout << " *(p + 4) = " << *(p + 4) << std::endl;

  std::cout << " p + 4 = " << p + 4 << std::endl;

  std::cout << " A[6] = 6[A] = " << 6[A] << std::endl;
  std::cout << " B[6] = 6[B] = " << 6[B] << std::endl;

  for (int i = 0; i < N; i++) {
    std::cout << A[i] << "   ";
  }
  std::cout << std::endl;

  for (int i = 0; i < N; i++) {
    std::cout << B[i] << "   ";
  }
  std::cout << std::endl;

  for (int i = 0; i < N / 2; i++) {
    int Temp = 0;
    Temp = B[i];
    B[i] = B[N - i - 1];
    B[N - i - 1] = Temp;
  }

  for (int i = 0; i < N; i++) {
    std::cout << B[i] << "   ";
  }
  std::cout << std::endl;


  return 0;
}