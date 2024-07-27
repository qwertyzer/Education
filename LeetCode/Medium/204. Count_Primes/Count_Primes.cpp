#include <cmath>
#include <iostream>
#include <vector>

int countPrimes(int n);

int main() {
  int n;
  std::cin >> n;
  std::cout << countPrimes(n) << std::endl;

  return 0;
}

int countPrimes(int n) {
  if (n < 2) {
    return 0;
  }

  std::vector<bool> isPrime(n, true);
  isPrime[0] = isPrime[1] = false;
  int count = 0;

  for (int p = 2; p < sqrt(n); ++p) {
    if (isPrime[p]) {
      for (int multiple = p * p; multiple < n; multiple += p) {
        isPrime[multiple] = false;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    if (isPrime[i]) {
      count++;
    }
  }

  return count;
}