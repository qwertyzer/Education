#include <iostream>
#include <vector>

// Автор задачи немного перемудрил с условием и мне не очень хочется ломать
// голову над пониманием вопроса, вместо того, чтобы писать код(

int countWays(std::vector<std::vector<int>>& ranges);

int main() {
  int m, n, var;
  std::cin >> m >> n;
  std::vector<std::vector<int>> ranges(m, std::vector<int>(n));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> var;
      ranges[i][j] = var;
    }
  }

  for (const auto& row : ranges) {
    for (const auto& elem : row) {
      std::cout << elem << ' ';
    }
    std::cout << std::endl;
  }
  std::cout << countWays(ranges) << std::endl;
  return 0;
}

int countWays(std::vector<std::vector<int>>& ranges) {
  int result;
  return result;
}