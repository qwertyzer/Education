// Дано целочисленный массив nums,
// вернуть все возможные неубываюшие подпоследовательности данного массива
// с не менее чем двумя элементами. Вы можете вернуть ответ в любом порядке.

#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums);
void backtrack(const std::vector<int>& nums, int start,
               std::vector<int>& current,
               std::vector<std::vector<int>>& result);

int main() {
  std::vector<int> input;
  int n, num;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    input.push_back(num);
  }
  // sort(input.begin(), input.end());
  // for (int i : input) {
  //   std::cout << i << " ";
  // }
  std::vector<std::vector<int>> result = findSubsequences(input);
  for (const auto& row : result) {
    for (int i : row) {
      std::cout << i << " ";
    }
  }
  return 0;
}

std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums) {
  std::vector<std::vector<int>> result;
  std::vector<int> current;
  backtrack(nums, 0, current, result);
  return result;
}

void backtrack(const std::vector<int>& nums, int start,
               std::vector<int>& current,
               std::vector<std::vector<int>>& result) {
  if (current.size() >= 2) {
    result.push_back(current);
  }
  std::unordered_set<int> used;
  for (size_t i = start; i < nums.size(); ++i) {
    if (used.find(nums[i]) != used.end()) {
      continue;
    }
    if (current.empty() || nums[i] >= current.back()) {
      current.push_back(nums[i]);
      used.insert(nums[i]);
      backtrack(nums, i + 1, current, result);
      current.pop_back();
    }
  }
}