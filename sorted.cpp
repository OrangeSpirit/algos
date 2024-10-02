#include <iostream>
#include <ctime>
#include <chrono>

int main() {
  clock_t start = clock();
  auto begin = std::chrono::steady_clock::now();

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

  auto end = std::chrono::steady_clock::now(); // begin - end   chrono
  
  auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
  std::cout << "chrono =  " << elapsed_ms.count() << " ms\n";
  

  clock_t finish = clock();  // start - finish    ctime

  std::cout << "ctime = " << (double)(finish - start) / CLOCKS_PER_SEC << " sec" << std::endl;
  //std::cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << std::endl; 

  return 0;
}