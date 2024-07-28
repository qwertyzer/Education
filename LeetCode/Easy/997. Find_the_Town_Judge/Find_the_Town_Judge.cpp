// В городе есть n человек, помеченных от 1 до n. Ходят слухи, что один из этих
// людей тайно является городским судьей.

// Если городской судья существует, то:

// 1. Городской судья никому не доверяет.
// 2. Все (кроме городского судьи) доверяют городскому судье.
// 3. Существует ровно один человек, который удовлетворяет свойствам 1 и 2.

// Вам дан массив trust, где trust[i] = [ai, bi], представляющий, что человек с
// меткой ai доверяет человеку с меткой bi. Если доверительных отношений нет в
// массиве trust, то таких доверительных отношений не существует.

// Верните метку городского судьи, если городской судья существует и может быть
// идентифицирован, или верните -1 в противном случае.

#include <iostream>
#include <vector>

int findJudge(int n, std::vector<std::vector<int>>& trust);

int main() {
  int n;
  std::vector<std::vector<int>> trust;
  std::cin >> n;
  std::cout << findJudge(n, trust) << std::endl;
  return 0;
}

int findJudge(int n, std::vector<std::vector<int>>& trust) {
  std::vector<int> incoming(n + 1, 0);
  std::vector<int> outgoing(n + 1, 0);

  for (const auto& t : trust) {
    outgoing[t[0]]++;
    incoming[t[1]]++;
  }

  for (int i = 1; i <= n; i++) {
    if (incoming[i] == n - 1 && outgoing[i] == 0) {
      return i;
    }
  }

  return -1;
}