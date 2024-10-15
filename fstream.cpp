#include <string>
#include <fstream>

int main() {
  std::string name;
  std::ifstream input("input.txt");
  input >> name;

  std::ofstream output("output.txt");
  output << "Hi, " << name << std::endl;


  return 0;
}