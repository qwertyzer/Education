#include <iostream>
#include <string>

int scoreOfString(std::string s);

int main() {
  std::string leetcode;
  std::cin >> leetcode;
  std::cout << scoreOfString(leetcode) << std::endl;
  return 0;
}

int scoreOfString(std::string s) {
  int result = 0;
  for (int i = 0; i < static_cast<int>(s.length()) - 1; i++) {
    result += abs(s[i] - s[i + 1]);
  }
  return result;
}