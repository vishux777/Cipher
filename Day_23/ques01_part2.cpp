#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

bool hasPairWithSumLogarithmic(std::vector<int> &arr, int target) {
  std::sort(arr.begin(), arr.end());
  int left = 0, right = arr.size() - 1;

  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == target) {
      return true;
    } else if (sum < target) {
      ++left;
    } else {
      --right;
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

  if (hasPairWithSumLogarithmic(arr, target)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return EXIT_SUCCESS;
}
