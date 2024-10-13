#include <iostream>
#include <vector>

int majorityElement(std::vector<int>& nums);

int main() {
  std::vector<int> nums;
  int n, val;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    nums.push_back(val);
  }
  std::cout << majorityElement(nums) << std::endl;
  return 0;
}

int majorityElement(std::vector<int>& nums) {
  int result, count = 0;

  for (int i : nums) {
    if (count == 0) {
      result = i;
    }
    i == result ? count++ : count--;
  }
  count = 0;
  for (int i : nums) {
    if (i == result) {
      count++;
    }
  }

  return result;
}