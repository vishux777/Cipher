#include <cstdlib>
#include <iostream>

class Stack {
  int *arr;
  int top;
  int capacity;

public:
  Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
  }

  ~Stack() { delete[] arr; }

  int push(int value) {
    if (top == capacity - 1) {
      std::cout << "Stack overflow" << std::endl;
      return -1;
    }
    arr[++top] = value;
    return 0;
  }

  int pop() {
    if (top == -1) {
      std::cout << "Stack underflow" << std::endl;
      return EXIT_FAILURE;
    }
    return arr[top--];
  }

  bool isEmpty() const { return top == -1; }
};

int main() {
  int n;
  std::cout << "Enter the number of elements: ";
  std::cin >> n;

  Stack stack(n);

  std::cout << "Enter " << n << " values: ";
  for (int i = 0; i < n; ++i) {
    int value;
    std::cin >> value;
    stack.push(value);
  }

  std::cout << "Popped values: ";
  while (!stack.isEmpty()) {
    std::cout << stack.pop();
    if (!stack.isEmpty())
      std::cout << ", ";
  }
  std::cout << std::endl;

  return EXIT_SUCCESS;
}
