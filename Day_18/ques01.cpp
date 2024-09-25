#include <cstdlib>
#include <iostream>
#include <string>
#include <tuple>

class Person {
  std::string firstName;
  std::string lastName;
  int age;

public:
  Person(std::string fn, std::string ln, int a)
      : firstName(fn), lastName(ln), age(a) {}

  std::string getFullName() const { return firstName + " " + lastName; }

  std::tuple<std::string, std::string, int> getDetails() const {
    return std::make_tuple(firstName, lastName, age);
  }
};

int main() {
  Person person("Gangadhar", "Shastri", 28);

  std::cout << "Full Name: " << person.getFullName() << std::endl;

  auto [fName, lName, personAge] = person.getDetails();
  std::cout << "First Name: " << fName << "\nLast Name: " << lName
            << "\nAge: " << personAge << std::endl;

  return EXIT_SUCCESS;
}
