#include <cstdlib>
#include <fstream>
#include <iostream>

int main() {
  std::ofstream outFile("details.txt");

  if (!outFile) {
    std::cerr << "File could not be opened." << std::endl;
    return EXIT_FAILURE;
  }

  outFile << "Name: Gangadhar Shastri\n";
  outFile << "Age: 25\n";
  outFile << "Occupation: Shaktimaan\n";

  outFile.close();

  std::ifstream inFile("details.txt");
  std::string line;

  if (!inFile) {
    std::cerr << "File could not be opened." << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Details from the file:" << std::endl;
  while (std::getline(inFile, line)) {
    std::cout << line << std::endl;
  }

  inFile.close();
  return EXIT_SUCCESS;
}
