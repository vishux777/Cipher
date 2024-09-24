#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {2, 4, 6, 7, 8};
  int toSearch = 6;

  if (std::find(vec.begin(), vec.end(), toSearch) != vec.end()) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }

  return EXIT_SUCCESS;
}
