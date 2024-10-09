#include <iostream>

void rotate_left(int a[], unsigned size, int shift) {
  for (int i = 0; i < shift; i++) {
    int first = a[0];
    
    for (int j = 0; j < (int)size - 1; j++) {
      a[j] = a[j + 1];
    }
    a[size - 1] = first;
  }
}

void rotate_right(int a[], unsigned size, int shift) {
  for (int i = 0; i < shift; i++) {
    int last = a[size - 1];

    for (int j = (int)size - 1; j > 0; j--) {
      a[j] = a[j - 1];
    }
    a[0] = last;
  }
}

void print_array(int a[], unsigned size) {
  int* p = a;
  while (size--) {
    std::cout << *(p++) << ' ';
  }
  std::cout << std::endl;
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 17, 19, 21};
  uint length = sizeof(a)/sizeof(int);
  int shift = 2;

  print_array(a, length);
  rotate_left(a, length, shift);
  print_array(a, length);

  shift = 5;
  
  rotate_right(a, length, shift);
  print_array(a, length);

  std::cout << "shift  = " << shift << std::endl;
  std::cout << "length = " << (int)length << std::endl;

  return 0;
}