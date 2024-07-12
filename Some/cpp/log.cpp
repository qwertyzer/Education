#include <iostream>

int logorifm(int n);

int main() {
  int T, n;
  std::cin >> T;
  for (int i = 0; i < T; i++) {
    std::cin >> n;
    std::cout << logorifm(n) << std::endl;
  }
  return 0;
}

int logorifm(int n) {
  int result = 0, i = 2;
  while (i <= n) {
    result++;
    i *= 2;
  }
  return result;
}