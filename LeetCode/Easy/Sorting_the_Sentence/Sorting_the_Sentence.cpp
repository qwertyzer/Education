#include <iostream>
#include <string>
#include <vector>

std::string sortSentence(std::string s);

int main() {
  std::string s;
  getline(std::cin, s);
  std::cout << sortSentence(s) << std::endl;
  return 0;
}

std::string sortSentence(std::string s) {
  std::vector<std::string> position(10, "");
  for (size_t i = 0; i < s.size(); i++) {
    std::string tmp;
    while (!isdigit(s[i])) {
      tmp += s[i++];
    }
    position[s[i++] - '0'] = tmp;
  }
  std::string result;
  for (int i = 1; i < 10; i++) {
    if (position[i].length() > 0) {
      result += position[i] + ' ';
    }
  }
  result.pop_back();
  return result;
}