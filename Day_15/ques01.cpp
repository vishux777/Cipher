#include <cstdlib>
#include <iostream>
#include <string>

class Student {
  std::string name;
  int age;

public:
  Student(std::string n, int a) : name(n), age(a) {}

  void displayDetails() {
    std::cout << "Name: " << this->name << "\nAge: " << this->age << std::endl;
  }
};

int main() {
  Student student("Alice", 21);
  student.displayDetails();

  return EXIT_SUCCESS;
}
