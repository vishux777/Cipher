#include <cstdlib>
#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1,
                               const std::string &str2) {
  return str1 + str2;
}

int main() {
  std::string str1, str2;
  std::cout << "str1 = ";
  std::getline(std::cin, str1);
  std::cout << "str2 = ";
  std::getline(std::cin, str2);
  std::cout << concatenateStrings(str1, str2) << std::endl;

  return EXIT_SUCCESS;
}
