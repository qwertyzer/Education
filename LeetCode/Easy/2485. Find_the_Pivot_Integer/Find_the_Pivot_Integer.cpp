#include <iostream>

int pivotInteger(int n);

int main() {
  int n;
  std::cin >> n;
  std::cout << pivotInteger(n);
  return 0;
}

int pivotInteger(int n) {
  int total_sum = n * (n + 1) / 2;
  int sum_left = 0, sum_right = 0, result = -1;
  for (int i = 0; i <= n; i++) {
    sum_left = i * (i + 1) / 2;
    sum_right = total_sum - sum_left + i;
    if (sum_left == sum_right) {
      result = i;
    }
    sum_left = 0;
    sum_right = 0;
  }

  return result;
}