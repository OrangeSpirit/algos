#include <iostream>

int main() {
  int N;
  int d = 2;
  std::cin >> N;
  while (N != 1) {
    if (N%d == 0) {
      std::cout << d << std::endl;
      N = N / d;
    } else {
      d++;
    }
  }
}