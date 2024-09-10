#include <cstdlib>
#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
  int count = 0;
  for (char c : str) {
    if (c == ch) {
      count++;
    }
  }
  return count;
}

int main() {
  std::string str;
  char character;
  std::cout << "String = ";
  std::getline(std::cin, str);
  std::cout << "character = ";
  std::cin >> character;
  std::cout << countCharacter(str, character) << std::endl;

  return EXIT_SUCCESS;
}
