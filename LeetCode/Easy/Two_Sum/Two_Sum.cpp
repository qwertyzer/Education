#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main() {
  std::vector<int> nums;
  int num, target;
  while (std::cin >> num && num != -1) {
    nums.push_back(num);
  }
  std::cin >> target;
  std::vector<int> result = twoSum(nums, target);
  for (int i : result) {
    std::cout << i << " ";
  }
  return 0;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
  std::vector<int> result(2, -1);
  for (size_t i = 0; i < nums.size(); i++) {
    for (size_t j = i + 1; j < nums.size(); j++) {
      std::cout << "i: " << i << " j: " << j << std::endl;
      if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j;
      }
    }
  }
  return result;
}