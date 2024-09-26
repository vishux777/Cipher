#include <cstdlib>
#include <iostream>
#include <vector>

class PriorityQueue {
  std::vector<int> arr;
  int size;

public:
  PriorityQueue(int capacity) {
    arr.resize(capacity);
    size = 0;
  }

  void enqueue(int value) {
    if (size == arr.size()) {
      std::cout << "Priority Queue is full" << std::endl;
      return;
    }

    int i;
    for (i = size - 1; i >= 0 && arr[i] < value; --i) {
      arr[i + 1] = arr[i]; // Shift elements to the right
    }

    arr[i + 1] = value; // Insert the new value
    size++;
  }

  int dequeue() {
    if (size == 0) {
      std::cout << "Priority Queue is empty" << std::endl;
      return -1;
    }
    return arr[--size]; // Return and remove the highest priority element
  }

  void display() {
    if (size == 0) {
      std::cout << "Priority Queue is empty" << std::endl;
      return;
    }

    std::cout << "Priority Queue: ";
    for (int i = 0; i < size; ++i) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  int capacity;
  std::cout << "Enter the capacity of the priority queue: ";
  std::cin >> capacity;

  PriorityQueue pq(capacity);

  int n, value;
  std::cout << "Enter the number of elements to enqueue: ";
  std::cin >> n;

  std::cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> value;
    pq.enqueue(value);
  }

  pq.display();

  std::cout << "Dequeuing highest priority element: " << pq.dequeue()
            << std::endl;
  pq.display();

  return EXIT_SUCCESS;
}
