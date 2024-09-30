#include <iostream>

const int MAX_SIZE = 100;

int main() {
  int N = MAX_SIZE;
  int stek[N];
  int top = 0;
  int x;
  std::cin >> x;
  while (x != 0) {
    stek[top++] = x;
    std::cin >> x;
  }

  for (int i = 0; i < top; i++) {
    std::cout << "stek[" << i << "] = " << stek[i] << std::endl;
  }
  std::cout << "top = " << top << std::endl;

  while (top != 0) {
    std::cout << "stek[top] = " << stek[--top] << std::endl;
  }
  std::cout << "top = " << top << std::endl;


  return 0;

}