#include <iostream>

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, int p);

int main() {
  int x;
  int p;
  std::cin >> x;
  std::cin >> p;
  std::cout << power(x, p);
  return 0;
}

int power(int x, int p) {
  int answer = 1;
  if (x == 0) {
    answer = 0;
  } else if (p == 0) {
    answer = 1;
  } else {
    for (int i = 0; i < p; i++) {
      answer = x * answer;
    }
  }
  return answer;
}