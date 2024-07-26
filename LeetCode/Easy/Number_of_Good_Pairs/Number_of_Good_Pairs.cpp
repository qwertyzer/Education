#include <chrono>
#include <iostream>
#include <unordered_map>
#include <vector>

int numIdenticalPairs(std::vector<int>& nums);

int main() {
  std::vector<int> nums = {1,  2, 3, 1, 1, 3, 1, 2, 3, 4, 93, 34, 34, 23, 34,
                           1,  1, 2, 3, 1, 1, 3, 1, 2, 3, 4,  93, 34, 34, 23,
                           34, 1, 1, 2, 3, 1, 1, 3, 1, 2, 3,  4,  93, 34, 34};

  auto start = std::chrono::high_resolution_clock::now();

  int result = numIdenticalPairs(nums);

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = end - start;

  std::cout << "Количество хороших пар: " << result << std::endl;
  std::cout << "Время выполнения: " << elapsed.count() << " секунд"
            << std::endl;

  return 0;
}

int numIdenticalPairs(std::vector<int>& nums) {
  int result = 0;
  std::unordered_map<int, int> count;
  for (int num : nums) {
    ++count[num];
  }
  for (const auto& [num, counted] : count) {
    if (counted > 1) {
      result += (counted * (counted - 1)) / 2;
    }
  }

  return result;
}