#include <iostream>

int main() {
  int N = 0;
  std::cout << "input N  ";
  std::cin >> N;
  bool sieve[N + 1];
  for (int i = 0; i <= N; i++) {
    sieve[i] = true;
  }
  int x = 2;
  while (x * x <= N) {
    if (sieve[x]) {                      // found new prime
      for (int y = x * x; y <= N; y += x) {
        sieve[y] = false;                // not prime
      }
    }
    x++;
  }
  for (int i = 2; i <= N; i++) {
    if (sieve[i]) {
      std::cout << i << "   ";
    }
  }
  std::cout << std::endl;
  return 0;
}