#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

bool isPalindrome(const std::string &str) {
  int left = 0, right = str.length() - 1;
  while (left < right) {
    while (left < right && !isalnum(str[left]))
      ++left;
    while (left < right && !isalnum(str[right]))
      --right;
    if (tolower(str[left]) != tolower(str[right]))
      return false;
    ++left;
    --right;
  }
  return true;
}

int main() {
  std::string s = "A man, a plan, a canal, Panama";
  bool result = isPalindrome(s);
  std::cout << std::boolalpha << result << std::endl;
  return EXIT_SUCCESS;
}
