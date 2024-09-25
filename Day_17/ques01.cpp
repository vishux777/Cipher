#include <cstdlib>
#include <iostream>

bool keyExists(int arr[][100], int rows, int cols, int key) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if (arr[i][j] == key) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int arr[100][100];
  int rows, cols, key;

  std::cout << "Enter number of rows and columns: ";
  std::cin >> rows >> cols;

  std::cout << "Enter elements of the 2D array:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cin >> arr[i][j];
    }
  }

  std::cout << "Enter key to search: ";
  std::cin >> key;

  if (keyExists(arr, rows, cols, key)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return EXIT_SUCCESS;
}
