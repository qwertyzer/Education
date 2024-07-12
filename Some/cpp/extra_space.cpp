#include <iostream>

int main() {
  char c;
  bool is_ok = true;
  while (std::cin.get(c))
    if (c != ' ') {
      std::cout << c;
      is_ok = true;
    } else if (is_ok) {
      std::cout << c;
      is_ok = false;
    }
  return 0;
}