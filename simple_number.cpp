#include <iostream>

int main() {
  bool flag = true;
  int N;
  std::cin >> N;
  for (int i = 2; i < N; ++i) {
    if (N%i == 0) {
      flag = false;
      break;
    }
  }
  if (flag) {
    std::cout << N << " is a simple" << std::endl;
  } else {
    std::cout << N << " Not simple" << std::endl;
  }
return 0;
}