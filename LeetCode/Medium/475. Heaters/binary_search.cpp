#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int find(std::vector<int> &nums, int key);

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, 100);
  // int random_number = dis(gen);

  std::vector<int> nums;
  int n, key;

  std::cin >> n >> key;
  for (int i = 0; i < n; i++) {
    nums.push_back(dis(gen));
  }

  std::cout << "input array: ";
  for (const auto &num : nums) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;

  sort(nums.begin(), nums.end());
  std::cout << "sorted array: ";
  for (const auto &num : nums) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;

  int result = find(nums, key);

  if (result != -1) {
    std::cout << "Элемент найден на позиции: " << result << std::endl;
  } else {
    std::cout << "Элемент не найден" << std::endl;
  }
  return 0;
}

int find(std::vector<int> &nums, int key) {
  int left = 0, right = nums.size() - 1, mid;

  while (left <= right) {
    mid = left + (right - left) / 2;
    if (nums[mid] == key) {
      return mid;
    } else if (nums[mid] < key) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}