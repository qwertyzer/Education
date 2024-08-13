#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <sstream>
#include <string>
#include <vector>

int calculation_max_height(const std::map<int, std::vector<int>>& result,
                           const std::vector<int>& ordered_days, int n);
void clear_input(int n, std::vector<std::string>& input, std::vector<int>& day,
                 std::map<int, std::vector<int>>& result);
std::vector<int> order_of_days(const std::map<int, std::vector<int>>& result);

int main() {
  int n;
  std::vector<std::string> input;
  std::vector<int> day;
  std::map<int, std::vector<int>> result;
  std::vector<int> ordered_days;
  std::cin >> n;
  std::cin.ignore();  // вот эта строчка еще под вопросом
  clear_input(n, input, day, result);
  ordered_days = order_of_days(result);
  std::cout << calculation_max_height(result, ordered_days, n) << std::endl;

  for (int i : day) {
    std::cout << i << " ";
  }

  return 0;
}

int calculation_max_height(const std::map<int, std::vector<int>>& result,
                           const std::vector<int>& ordered_days, int n) {
  int max_h = 0, now_h = 0;
  for (int i = 0; i < n; ++i) {
    int day = ordered_days[i];
    now_h += result.at(day)[0];
    if (max_h < now_h) {
      max_h = now_h;
    }
    now_h -= result.at(day)[1];
  }
  return max_h;

  return max_h;
}

void clear_input(int n, std::vector<std::string>& input, std::vector<int>& day,
                 std::map<int, std::vector<int>>& result) {
  std::string berries;
  int a, b;
  for (int i = 1; i <= n; i++) {
    std::getline(std::cin, berries);
    input.push_back(berries);
    std::istringstream iss(berries);
    if (iss >> a >> b) {
      result[i].push_back(a);
      result[i].push_back(b);
      result[i].push_back(a - b);
    }
  }
  day = order_of_days(result);
}

std::vector<int> order_of_days(const std::map<int, std::vector<int>>& result) {
  std::vector<std::pair<int, int>> day_values;

  for (const auto& pair : result) {
    int day = pair.first;
    int third_value = pair.second[2];
    day_values.emplace_back(day, third_value);
  }

  std::sort(day_values.begin(), day_values.end(),
            [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
              return a.second > b.second;
            });

  std::vector<int> ordered_days;
  for (const auto& pair : day_values) {
    ordered_days.push_back(pair.first);
  }

  return ordered_days;
}