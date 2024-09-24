#include <cstdlib>
#include <iostream>

int findMax(const int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[] = {1, 5, 3, 9, 2};
  int max = findMax(arr, 5);
  std::cout << max << std::endl;
  return EXIT_SUCCESS;
}
