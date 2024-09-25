#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int n, m;
  int arr[100][100];
  std::vector<int> elements;

  std::cout << "Enter the number of rows and columns: ";
  std::cin >> n >> m;

  std::cout << "Enter the elements of the array:\n";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cin >> arr[i][j];
      elements.push_back(arr[i][j]);
    }
  }

  std::sort(elements.begin(), elements.end());

  std::cout << "Sorted 2D array:\n";
  int index = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      arr[i][j] = elements[index++];
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return EXIT_SUCCESS;
}
