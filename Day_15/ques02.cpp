#include <cstdlib>
#include <iostream>

struct Node {
  int data;
  Node *next;
};

void deleteValue(Node *&head, int value) {
  if (!head)
    return;

  while (head && head->data == value) {
    Node *temp = head;
    head = head->next;
    delete temp;
  }

  Node *current = head;
  while (current && current->next) {
    if (current->next->data == value) {
      Node *temp = current->next;
      current->next = current->next->next;
      delete temp;
    } else {
      current = current->next;
    }
  }
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
  Node *head = new Node{10, new Node{20, new Node{30, new Node{40, nullptr}}}};
  int valueToDelete = 20;

  std::cout << "Original List: ";
  printLinkedList(head);

  deleteValue(head, valueToDelete);

  std::cout << "Updated List: ";
  printLinkedList(head);

  return EXIT_SUCCESS;
}
