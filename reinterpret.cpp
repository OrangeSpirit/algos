#include <iostream>

int main() {
  __int64_t x;
  double y = 0.5;
  
  x = *reinterpret_cast<__ino64_t *>(&y);
  std::cout << "y = " << y << "     x = " << x << std::endl;


  y = 1.0;
  x = *reinterpret_cast<__ino64_t *>(&y);
  std::cout << "y = " << y << "     x = " << x << std::endl;

  y = 0.0;
  x = *reinterpret_cast<__ino64_t *>(&y);
  std::cout << "y = " << y << "     x = " << x << std::endl;

  y = -1.0;
  x = *reinterpret_cast<__ino64_t *>(&y);
  std::cout << "y = " << y << "     x = " << x << std::endl;

  return 0;
}