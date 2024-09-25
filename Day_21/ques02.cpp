#include <cstdlib>
#include <iostream>

struct Node {
  int data;
  Node *next;
};

bool detectCycle(Node *head) {
  if (!head || !head->next)
    return false;

  Node *slow = head;
  Node *fast = head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
      return true;
  }

  return false;
}

int main() {
  Node *head = new Node{3, nullptr};
  head->next = new Node{2, nullptr};
  head->next->next = new Node{0, nullptr};
  head->next->next->next = new Node{-4, head->next};

  if (detectCycle(head)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }

  return EXIT_SUCCESS;
}
