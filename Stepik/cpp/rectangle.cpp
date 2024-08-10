#include <cmath>
#include <iostream>

int main() {
  int square, count = 0;
  std::cin >> square;
  for (int i = 1; i <= static_cast<int>(std::sqrt(square)); i++) {
    if (square % i == 0) count++;
  }
  std::cout << count << std::endl;
  return 0;
}