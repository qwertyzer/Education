#include <cmath>
#include <iostream>
#include <vector>

int countPrimes(int n);

int main() {
  int n;
  std::cin >> n;
  countPrimes(n);
  return 0;
}

int countPrimes(int n) {
  int result = 0, p = 2, i = 0;
  std::vector<int> numbers;
  if (n < 2) {
    result = 0;
  } else {
    for (int k = 0; k != n; k++) {
      numbers.push_back(k);
    }
    while (p <= sqrt(n)) {
      if (numbers[i] % p == 0) {
        numbers.erase(numbers.begin() + i);
      }
      i++;
    }
  }
  for (int j : numbers) {
    std::cout << j << " " << std::endl;
  }
  return result;
}