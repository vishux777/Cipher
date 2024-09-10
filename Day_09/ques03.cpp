#include <cstdlib>
#include <iostream>

int main() {
  int num = 20;
  int *ptr = &num;
  int **ptrToPtr = &ptr;

  std::cout << "Value using num: " << num << std::endl;
  std::cout << "Value using ptr: " << *ptr << std::endl;
  std::cout << "Value using ptrToPtr: " << **ptrToPtr << std::endl;

  return EXIT_SUCCESS;
}
