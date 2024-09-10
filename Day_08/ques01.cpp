#include <cstdlib>
#include <iostream>
#include <string>

int stringLength(const std::string &str) { return str.length(); }

int main() {
  std::string str1;
  std::cout << "str1 = ";
  std::getline(std::cin, str1);
  std::cout << stringLength(str1) << std::endl;

  return EXIT_SUCCESS;
}
