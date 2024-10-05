#include <iostream>

int main() {
  int N, M;
  std::cout << "input N, M   ";
  std::cin >> N >> M;
  
  //Memory allocation
  int **A = new int*[N];
  A[0] = new int[N * M];
  for (int i = 1; i < N; i++) {
    A[i] = A[0] + M * i; 
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
  delete[] A[0];
  delete[] A;



  return 0;
}