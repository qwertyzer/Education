#include <iostream>
#include <string>
#include <vector>

std::string optimalDivision(std::vector<int>& nums);

int main() {
  int n, val;
  std::vector<int> nums;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    nums.push_back(val);
  }
  std::cout << optimalDivision(nums) << std::endl;
  return 0;
}

std::string optimalDivision(std::vector<int>& nums) {
  std::string result;
  int number = nums[0];
  if (size(nums) == 1) {
    result = std::to_string(nums[0]);
    return result;
  } else if (size(nums) == 2) {
    result = std::to_string(nums[0]) + '/' + std::to_string(nums[1]);
    return result;
  }
  for (size_t i = 0; i < size(nums); i++) {
    number = nums[i];
    result += std::to_string(number);
    if (i == 0) {
      result += "/(";
    } else if (i == size(nums) - 1) {
      result += ')';
    } else {
      result += '/';
    }
  }
  return result;
}