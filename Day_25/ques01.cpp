#include <cstdlib>
#include <iostream>
#include <vector>

int findSingleNumber(const std::vector<int> &nums) {
  int single = 0;
  for (int num : nums) {
    single ^= num; // XOR
  }
  return single;
}

int main() {
  int n;
  std::cout << "Enter the number of elements: ";
  std::cin >> n;

  std::vector<int> nums(n);
  std::cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> nums[i];
  }

  int result = findSingleNumber(nums);
  std::cout << "The single element is: " << result << std::endl;

  return EXIT_SUCCESS;
}
