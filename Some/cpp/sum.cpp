#include <iostream>

int summ(int a, int b);

int main() {
  int count, a, b;
  std::cin >> count;
  for (int i = 0; i < count; i++) {
    std::cin >> a >> b;
    std::cout << summ(a, b) << std::endl;
  }

  return 0;
}

int summ(int a, int b) { return a + b; }