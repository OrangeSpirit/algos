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
  std::cout << "flag = " << flag << std::endl;
return 0;
}