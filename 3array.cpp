#include <iostream>

int main() {
  int N, M;
  std::cout << "input N, M   ";
  std::cin >> N >> M;
  
  //Memory allocation
  int **A = new int*[N];
  for (int i = 0; i < N; i++) {
    A[i] = new int[M];
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      A[i][j] = i * M + j;
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      std::cout << A[i][j] << '\t';
    }
    std::cout << std::endl;
  }

  //clean memory
  for (int i = 0; i < N; i++) {
    delete[] A[i];
  }
  delete[] A;



  return 0;
}