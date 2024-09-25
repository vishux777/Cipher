#include <cstdlib>
#include <iostream>

class Rectangle {
  int width;
  int height;

public:
  Rectangle(int w, int h) : width(w), height(h) {}

  Rectangle(const Rectangle &other) {
    width = other.width;
    height = other.height;
  }

  void displayDimensions() {
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
  }
};

int main() {
  Rectangle rect1(10, 20);
  Rectangle rect2 = rect1;
  rect2.displayDimensions();
  return EXIT_SUCCESS;
}
