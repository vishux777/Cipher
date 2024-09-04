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

  int sumOdd = 0, sumEven = 0;
  for (int i = 0; i < size; ++i) {
    if (array[i] % 2 == 0) {
      sumEven += array[i];
    } else {
      sumOdd += array[i];
    }
  }

  std::cout << "Sum of odd numbers: " << sumOdd << std::endl;
  std::cout << "Sum of even numbers: " << sumEven << std::endl;

  delete[] array;

  return EXIT_SUCCESS;
}
