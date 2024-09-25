#include <cstdlib>
#include <iostream>
#include <vector>

int maxConsecutiveOnes(const std::vector<int> &arr) {
  int maxCount = 0;
  int currentCount = 0;

  for (int num : arr) {
    if (num == 1) {
      currentCount++;
      maxCount = std::max(maxCount, currentCount);
    } else {
      currentCount = 0;
    }
  }

  return maxCount;
}

int main() {
  int n;
  std::cout << "Enter the number of elements in the binary array: ";
  std::cin >> n;

  std::vector<int> arr(n);
  std::cout << "Enter the elements (0s and 1s only): ";
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  int result = maxConsecutiveOnes(arr);
  std::cout << "Maximum number of consecutive ones: " << result << std::endl;

  return EXIT_SUCCESS;
}
