#include <iostream>

int strstr (const char* text, const char* pattern) {
  for (int i = 0; *text != '\0'; i++, text++)
    for(int j = 0; *(text + j) == *(pattern + j); j++)
      if (*(pattern + j + 1) == '\0') return i;
  return !*pattern ? 0 : -1;
}

// int strstr(const char *text, const char *pattern) {
//   for(int i = 0; *text != '\0'; i++, text++)
//     for(int j = 0; *(text + j) == *(pattern + j); j++)
//       if(*(pattern + j + 1) == '\0') return i;
//   return !*pattern ? 0 : -1; 
// }

int main() {
  char text[] = "abudabi";
  char pattern[] = "dab";

  int result = strstr(text, pattern);
  std::cout << "result = " << result << std::endl;

  return 0;
}