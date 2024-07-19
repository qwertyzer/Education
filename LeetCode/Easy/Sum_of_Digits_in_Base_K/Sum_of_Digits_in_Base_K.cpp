#include <iostream>

int sumBase(int n, int k);

int main() {
  int k, n;
  std::cin >> n >> k;
  std::cout << sumBase(n, k);
  return 0;
}

int sumBase(int n, int k) {
  int result = 0;
  while (n > 0) {
    result += n % k;
    n = n / k;
  }
  return result;
}