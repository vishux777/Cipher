#include <cstdlib>
#include <iostream>

int main() {
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  int *array = new int[size];
  std::cout << "Enter the array: ";
  for (int i = 0; i < size; ++i) {
    std::cin >> array[i];
  }

  int sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += array[i];
  }

  std::cout << "Sum of the array: " << sum << std::endl;

  delete[] array;

  return EXIT_SUCCESS;
}
