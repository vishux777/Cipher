#include <cstdlib>
#include <iostream>

struct Node {
  int data;
  Node *next;
};

void printLinkedList(Node *head) {
  while (head) {
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

int main() {
  Node *head = new Node{10, new Node{20, new Node{30, new Node{40, nullptr}}}};
  printLinkedList(head);

  return EXIT_SUCCESS;
}
