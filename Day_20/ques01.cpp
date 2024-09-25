#include <cstdlib>
#include <iostream>

void rotate90(int arr[][100], int n, int m) {
  for (int i = 0; i < m; ++i) {
    for (int j = n - 1; j >= 0; --j) {
      std::cout << arr[j][i] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int n, m;
  int arr[100][100];

  std::cout << "Enter the number of rows and columns: ";
  std::cin >> n >> m;

  std::cout << "Enter the elements of the image matrix:\n";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cin >> arr[i][j];
    }
  }

  std::cout << "Rotated image by 90 degrees:\n";
  rotate90(arr, n, m);

  return EXIT_SUCCESS;
}
