#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int percent(std::string input);

int main() {
  std::string input;
  getline(std::cin, input);
  std::cout << percent(input) << std::endl;

  return 0;
}

int percent(std::string input) {
  int result;
  int minimum = std::numeric_limits<int>::max(),
      maximum = std::numeric_limits<int>::min();
  std::istringstream iss(input);
  std::string token;
  while (iss >> token) {
    if (std::stoi(token) < minimum) {
      minimum = std::stoi(token);
    }
    if (std::stoi(token) > maximum) {
      maximum = std::stoi(token);
    }
  }
  result = 100 / (maximum / minimum);
  return result;
}