#include <iostream>

int main() {
  int N, M;
  std::cout << "input N, M   ";
  std::cin >> N >> M;
  int A[N][M];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      A[i][j] = i * j + i + j;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::cout << "A[" << i << "][" << j << "] = " << A[i][j] << "     ";
    }
    std::cout << std::endl;
  }


// memory investigation

  int *p = reinterpret_cast<int *>(A);
  for (int i = 0; i < N * M; i++) {
    std::cout << *(p + i) << "   ";
  }


  return 0;
}