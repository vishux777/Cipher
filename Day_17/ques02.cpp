#include <cstdlib>
#include <iostream>

int main() {
  int arr[100][100];
  int rows, cols;
  int sum = 0;

  std::cout << "Enter number of rows and columns: ";
  std::cin >> rows >> cols;

  std::cout << "Enter elements of the 2D array:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cin >> arr[i][j];
      sum += arr[i][j];
    }
  }

  std::cout << "Sum of all values: " << sum << std::endl;

  return EXIT_SUCCESS;
}
