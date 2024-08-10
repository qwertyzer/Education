#include <iostream>

#define NUM_SIZE 1000

int main() {
  int numbers[NUM_SIZE];
  for (int i = 0; i < NUM_SIZE; i++) {
    std::cin >> numbers[i];
    if (numbers[i] % 2 == 0) {
      std::cout << numbers[i] << std::endl;
      break;
    }
  }

  return 0;
}