#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> luckyNumbers(std::vector<std::vector<int>>& matrix);

int main() {
  std::vector<std::vector<int>> matrix = {{3, 7, 8}, {9, 11, 13}, {15, 17, 19}};
  for (int i : luckyNumbers(matrix)) {
    std::cout << i << std::endl;
  }
  return 0;
}

std::vector<int> luckyNumbers(std::vector<std::vector<int>>& matrix) {
  std::vector<int> result;
  for (size_t i = 0; i < size(matrix); i++) {
    int min_in_row = *min_element(matrix[i].begin(), matrix[i].end());
    int col_index =
        min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();
    bool is_lucky = true;
    for (size_t j = 0; j < size(matrix); j++) {
      if (matrix[j][col_index] > min_in_row) {
        is_lucky = false;
      }
    }
    if (is_lucky) {
      result.push_back(min_in_row);
    }
  }
  return result;
}