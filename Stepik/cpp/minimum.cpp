#include <iostream>
#include <limits>

int main() {
  int n, number, minimum = std::numeric_limits<int>::max();
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> number;
    if (number % 10 == 3) {
      minimum = std::min(number, minimum);
    }
  }
  std::cout << minimum << std::endl;
  return 0;
}
