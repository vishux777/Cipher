#include <cstdlib>
#include <iostream>

class Car {
  std::string brand;
  std::string model;
  std::string engine;
  int seats;

public:
  Car(std::string b, std::string m, std::string e, int s)
      : brand(b), model(m), engine(e), seats(s) {}

  void displayInfo() {
    std::cout << "Brand: " << brand << "\nModel: " << model
              << "\nEngine: " << engine << "\nSeats: " << seats << std::endl;
  }
};

int main() {
  Car car("Toyota", "Camry", "V6", 5);
  car.displayInfo();

  return EXIT_SUCCESS;
}
