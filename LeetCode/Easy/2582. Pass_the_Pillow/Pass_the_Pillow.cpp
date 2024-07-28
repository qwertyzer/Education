#include <iostream>

int passThePillow(int n, int time);

int main() {
  int n, time;
  std::cin >> n >> time;
  std::cout << passThePillow(n, time);
  return 0;
}

int passThePillow(int n, int time) {
  int total_cycles = 2 * (n - 1);
  int remainder = time % total_cycles;
  int result;

  if (remainder < n) {
    result = remainder + 1;
  } else {
    result = n - (remainder - (n - 1));
  }
  return result;
}

// n = 2 time = 7
// 1 -> 2 -> 1 -> 2 -> 1 -> 2 -> 1 -> 2  if time chet res =

// n = 2 time = 8
// 1 -> 2 -> 1 -> 2 -> 1 -> 2 -> 1 -> 2 -> 1

// n = 5 time = 10
// 1 -> 2 -> 3 -> 4 -> 5 -> 4 -> 3 -> 2 -> 1 -> 2 -> 3  res = (time / n) + 1

// n = 6 time = 7
// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 5 -> 4 hz

// n = 6 time = 12
// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> 2 -> 3  res = (time /
// n) + 1
