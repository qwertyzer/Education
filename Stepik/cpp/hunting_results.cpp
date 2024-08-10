#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string simple, output;
  std::vector<int> result(9, 0);
  // int count = 0, j = 1;
  std::getline(std::cin, simple);
  for (char c : simple) {
    int digit =
        c - '1';  // Преобразуем символ в индекс (0 для '1', 1 для '2', и т.д.)
    result[digit]++;
  }
  for (int i = 0; i < 9; i++) {
    if (result[i] > 0) {
      output += std::to_string(result[i]) + std::to_string(i + 1);
    }
  }
  std::cout << output << std::endl;
  return 0;
}