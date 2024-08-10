#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::istringstream stream(input);
  int number, even_count = 0, odd_count = 0;
  while (stream >> number) {
    number % 2 == 0 ? even_count++ : odd_count++;
  }
  if (even_count > odd_count) {
    std::cout << "even" << std::endl;
  } else if (even_count == odd_count) {
    std::cout << "equal" << std::endl;
  } else {
    std::cout << "odd" << std::endl;
  }
  return 0;
}