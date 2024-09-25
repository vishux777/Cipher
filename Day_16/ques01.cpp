#include <iostream>

struct Node {
  int data;
  Node *next;
};

void insertSorted(Node *&head, int value) {
  Node *newNode = new Node{value, nullptr};

  if (!head || head->data > value) {
    newNode->next = head;
    head = newNode;
    return;
  }

  Node *current = head;
  while (current->next && current->next->data < value) {
    current = current->next;
  }
  newNode->next = current->next;
  current->next = newNode;
}

void printLinkedList(Node *head) {
  while (head) {
    std::cout << head->data;
    if (head->next)
      std::cout << "->";
    head = head->next;
  }
  std::cout << std::endl;
}

int main() {
  Node *head = nullptr;
  int value;

  std::cout << "Enter sorted linked list values (end with -1): ";
  int inputValue;
  while (std::cin >> inputValue && inputValue != -1) {
    insertSorted(head, inputValue);
  }

  std::cout << "Enter value to insert: ";
  std::cin >> value;

  insertSorted(head, value);

  std::cout << "Updated List: ";
  printLinkedList(head);

  return EXIT_SUCCESS;
}
