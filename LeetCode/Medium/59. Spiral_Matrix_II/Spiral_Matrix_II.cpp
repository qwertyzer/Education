#include <iostream>
#include <vector>

std::vector<std::vector<int>> generateMatrix(int n);

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> result = generateMatrix(n);
  for (const auto& row : result) {
    for (int i : row) {
      std::cout << i << " ";
    }
  }
  return 0;
}

std::vector<std::vector<int>> generateMatrix(int n) {
  std::vector<std::vector<int>> result(n, std::vector<int>(n, 1));
  int top = 0, bottom = n - 1;
  int left = 0, right = n - 1;
  int number = 1;
  if (n == 1) {
    return result;
  }
  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; ++i) {
      result[top][i] = number++;
    }
    top++;

    for (int i = top; i <= bottom; ++i) {
      result[i][right] = number++;
    }
    right--;

    for (int i = right; i >= left; --i) {
      result[bottom][i] = number++;
    }
    bottom--;

    for (int i = bottom; i >= top; --i) {
      result[i][left] = number++;
    }
    left++;
  }
  return result;
}