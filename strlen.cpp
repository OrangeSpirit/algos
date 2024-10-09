#include <iostream>

unsigned strlen_first(const char *str) {
  unsigned length = (unsigned)sizeof(*str)/(unsigned)sizeof(char);
  return length;
}

unsigned strlen_second(const char *str)
{
  //const char* p = str;
  unsigned length = 0;
  while (*(str++)) {
    length++;
  }
  return length;
}

int main() {
  char str[] = "long long string";
  std::cout << "&str = " << &str << std::endl;
  std::cout << "strlen_first(str) = " << strlen_first(str) << std::endl;
  std::cout << "strlen_second(str) = " << strlen_second(str) << std::endl;
  std::cout << "strlen(str) = " << (unsigned)sizeof(str)/(unsigned)sizeof(char) << std::endl;
  std::cout << "&str = " << &str << std::endl;
  
  return 0;
}