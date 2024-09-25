#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream inFile("sample.txt");
  std::string line;

  if (!inFile) {
    std::cerr << "File could not be opened." << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Contents of the file:" << std::endl;
  while (std::getline(inFile, line)) {
    std::cout << line << std::endl;
  }

  inFile.close();
  return EXIT_SUCCESS;
}
