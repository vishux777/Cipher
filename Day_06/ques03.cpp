#include <cstdlib>
#include <iostream>

int main() {
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  int *array = new int[size];
  std::cout << "Enter the array elements: ";
  for (int i = 0; i < size; ++i) {
    std::cin >> array[i];
  }

  int countOdd = 0, countEven = 0;
  for (int i = 0; i < size; ++i) {
    if (array[i] % 2 == 0) {
      countEven++;
    } else {
      countOdd++;
    }
  }

  std::cout << "Number of odd numbers: " << countOdd << std::endl;
  std::cout << "Number of even numbers: " << countEven << std::endl;

  delete[] array;

  return EXIT_SUCCESS;
}
