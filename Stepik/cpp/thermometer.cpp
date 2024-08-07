#include <iostream>

int main() {
  int x;
  std::cin >> x;
  if (x <= -25) {
    std::cout << "жутко холодно" << std::endl;
  } else if (x >= -26 && x < 0) {
    std::cout << "холодно" << std::endl;
  } else if (x >= 0 && x < 10) {
    std::cout << "прохладно" << std::endl;
  } else if (x >= 10 && x < 25) {
    std::cout << "тепло" << std::endl;
  } else if (x > 24) {
    std::cout << "жара" << std::endl;
  }
  return 0;
}