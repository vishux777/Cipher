#include <cstdlib>
#include <iostream>

struct Node {
  int data;
  Node *next;
  Node *prev;
};

void insertAtPosition(Node *&head, int pos, int value) {
  Node *newNode = new Node{value, nullptr, nullptr};

  if (pos == 0) {
    newNode->next = head;
    if (head) {
      head->prev = newNode;
    }
    head = newNode;
    return;
  }

  Node *current = head;
  for (int i = 0; current && i < pos - 1; ++i) {
    current = current->next;
  }

  if (current) {
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next) {
      current->next->prev = newNode;
    }
    current->next = newNode;
  }
}

void printDoublyLinkedList(Node *head) {
  Node *current = head;
  while (current) {
    std::cout << current->data;
    if (current->next)
      std::cout << " <-> ";
    current = current->next;
  }
  std::cout << std::endl;
}

int main() {
  Node *head = new Node{2, nullptr, nullptr};
  head->next = new Node{4, nullptr, head};
  head->next->next = new Node{5, nullptr, head->next};

  int position = 2;
  int value = 6;

  std::cout << "Original LinkedList: ";
  printDoublyLinkedList(head);

  insertAtPosition(head, position, value);

  std::cout << "Updated LinkedList: ";
  printDoublyLinkedList(head);

  return EXIT_SUCCESS;
}
