#include <algorithm>
#include <iostream>
#include <string>

std::string reverseStr(std::string s, int k);

int main() {
  std::string s;
  int k;
  std::cin >> s;
  std::cin >> k;
  std::cout << reverseStr(s, k) << std::endl;
  return 0;
}

std::string reverseStr(std::string s, int k) {
  int n = s.length();
  for (int i = 0; i < n; i += 2 * k) {
    if (i + k <= n) {
      std::reverse(s.begin() + i, s.begin() + i + k);
    } else {
      std::reverse(s.begin() + i, s.end());
    }
  }
  return s;
}