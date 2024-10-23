#include <algorithm>
#include <cmath>
#include <iostream>
#include <random>
#include <vector>

int findRadius(std::vector<int>& houses, std::vector<int>& heaters);
bool canCoverAllHouses(std::vector<int>& houses, std::vector<int>& heaters,
                       int radius);

int main() {
  int count_houses, count_heaters;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis_i(1, pow(10, 9));
  std::uniform_int_distribution<> dis_length(1, 3 * pow(10, 4));
  count_houses = dis_length(gen);
  count_heaters = dis_length(gen);
  std::vector<int> houses;
  std::vector<int> heaters;

  for (int i = 0; i < count_houses; i++) {
    houses.push_back(dis_i(gen));
  }

  for (int i = 0; i < count_heaters; i++) {
    heaters.push_back(dis_i(gen));
  }

  std::cout << findRadius(houses, heaters) << std::endl;
  return 0;
}

int findRadius(std::vector<int>& houses, std::vector<int>& heaters) {
  int left = 0, right = 1e9;
  int result = right;
  int mid = left + (right - left) / 2;

  sort(houses.begin(), houses.end());
  sort(heaters.begin(), heaters.end());

  while (left <= right) {
    mid = left + (right - left) / 2;
    if (canCoverAllHouses(houses, heaters, mid)) {
      result = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return result;
}

bool canCoverAllHouses(std::vector<int>& houses, std::vector<int>& heaters,
                       int radius) {
  size_t j = 0;
  for (size_t i = 0; i < houses.size(); ++i) {
    while (j < heaters.size() && abs(heaters[j] - houses[i]) > radius) {
      ++j;
    }
    if (j == heaters.size()) {
      return false;
    }
  }
  return true;
}