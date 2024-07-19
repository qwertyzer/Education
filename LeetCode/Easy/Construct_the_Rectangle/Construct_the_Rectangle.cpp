#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> constructRectangle(int area);

int main() {
  int area;
  std::cin >> area;
  std::vector<int> result = constructRectangle(area);
  for (int i : result) {
    std::cout << i << " ";
  }
  return 0;
}

std::vector<int> constructRectangle(int area) {
  std::vector<int> result;
  int sqrt_area = sqrt(area);
  if (sqrt(area) == floor(sqrt(area))) {
    auto iter = result.cbegin();
    result.insert(iter, 2, sqrt(area));
  } else {
    for (int i = sqrt_area; i >= 1; i--) {
      if (area % i == 0) {
        result.push_back(area / i);
        result.push_back(i);
        break;
      }
    }
  }
  return result;
}