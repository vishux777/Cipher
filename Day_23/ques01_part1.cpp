#include <cstdlib>
#include <iostream>
#include <vector>

bool hasPairWithSumQuadratic(const std::vector<int> &arr, int target) {
  int n = arr.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] + arr[j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int n, target;
  std::cout << "Enter the number of elements: ";
  std::cin >> n;

  std::vector<int> arr(n);
  std::cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::cout << "Enter the target: ";
  std::cin >> target;

  if (hasPairWithSumQuadratic(arr, target)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return EXIT_SUCCESS;
}
