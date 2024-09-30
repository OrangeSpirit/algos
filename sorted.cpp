#include <iostream>
#include <ctime>

int main() {
  clock_t start = clock();
  int N = 10000;
  int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
  //int A[N] = {1, 2, 3, 4, 5, 2, 1, 8, 9, 2};
  //int A[N] = {11, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  for (int i = 0; i < N; i++) A[i] = N - i;

  for (int i = 0; i < N; i++) {
    std::cout << A[i] << "   ";
  }
  std::cout << std::endl;

  //fool sorted
  // bool is_sorted = true;
  // int i = 0;
  // while (i < N -1) {
  //   if (A[i] > A[i + 1]) {
  //     is_sorted = false;
  //     int temp = A[i];
  //     A[i] = A[i + 1];
  //     A[i + 1] = temp;
  //     i = 0;
  //   } else {
  //   i++;
  //   }
  // }

// quadro sorted
  bool is_sorted = false;
  while ( not is_sorted) {
    int i = 0;
    is_sorted = true;
    while (i < N -1) {
      if (A[i] > A[i + 1]) {
        is_sorted = false;
        int temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
        //i = 0;
      }
      i++;
    }
  }
  
  if (is_sorted) {
    std::cout << "true" << std::endl;
  } else {std::cout << "false" << std::endl;
  }

  for (int i = 0; i < N; i++) {
    std::cout << A[i] << "   ";
  }
  std::cout << std::endl;

  clock_t end = clock();

  std::cout << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec" << std::endl;
  //std::cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << std::endl; 

  return 0;
}