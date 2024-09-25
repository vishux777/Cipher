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
      return -1;
    }
    return arr[top--];
  }

  bool isEmpty() const { return top == -1; }
};

int main() {
  Stack stack(100);

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);

  std::cout << "Stack created." << std::endl;

  return EXIT_SUCCESS;
}
