#include <cstdlib>
#include <iostream>

class Node {
public:
  int data;
  Node *next;

  Node(int value) {
    data = value;
    next = nullptr;
  }
};

class Stack {
  Node *top;

public:
  Stack() { top = nullptr; }

  void push(int value) {
    Node *newNode = new Node(value);
    newNode->next = top;
    top = newNode;
  }

  int pop() {
    if (top == nullptr) {
      return -1; // Stack underflow
    }
    int value = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return value;
  }

  bool isEmpty() const { return top == nullptr; }

  int peek() const {
    if (top == nullptr) {
      return -1; // Stack is empty
    }
    return top->data;
  }
};

int main() {
  Stack stack;
  int n, value;

  std::cout << "Enter the number of elements to push into the stack: ";
  std::cin >> n;

  std::cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> value;
    stack.push(value);
  }

  std::cout << "Popped elements: ";
  while (!stack.isEmpty()) {
    std::cout << stack.pop() << " ";
  }
  std::cout << std::endl;

  return EXIT_SUCCESS;
}
