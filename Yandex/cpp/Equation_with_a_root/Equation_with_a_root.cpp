#include <cmath>
#include <iostream>

#define NS 19834243
#define MS 19475783

double calculation(int a, int b, int c);

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int x = calculation(a, b, c);
  if (x == NS) {
    std::cout << "NO SOLUTION" << std::endl;
  } else if (x == MS) {
    std::cout << "MANY SOLUTIONS" << std::endl;
  } else {
    std::cout << x << std::endl;
  }
  return 0;
}

double calculation(int a, int b, int c) {
  double result;
  double a_double = static_cast<double>(a);
  double b_double = static_cast<double>(b);
  double c_double = static_cast<double>(c);
  if ((a == 0 && b == 0 && c == 0) || (a == 0 && (b == pow(c, 2)))) {
    result = MS;
  } else if (a != 0 && b == 0 && c == 0) {
    result = 0;
  } else if ((c == 0 && a != 0 && b != 0) || (b == 0 && a > 0 && c > 0)) {
    result = (c_double + (-b_double)) / a_double;
  } else if ((a * b > 0 && c > 0) || (a < 0 && b > 0 && c > 0)) {
    result = (pow(c_double, 2) + (-b_double)) / a_double;
  } else {
    result = NS;
  }
  if (floor(result) != result) {
    result = NS;
  }
  return result;
}

// [0, 0, 0] хер +
// [0, 64, 8] хер +
// ~~~~~~~~~~~
// [1, 2, 3] 1 корень  +
// [-1, 2, 3] 1 корень  +
// [-1, -2, 3] 1 корень  +
// [9, 0, 2] могут быть не целые корни  +
// [4, 13, 0] могут быть не целые корни  +
// [-4, -13, 0] могут быть не целые корни  +
// ~~~~~~~~~~~
// [11, 0, 0] корень всегда 0  +
// [-11, 0, 0] корень всегда 0  +
// ~~~~~~~~~~~
// [0, 4, 5] нет корней  !
// [-1, 2, -3] нет корней  !
// [1, -2, -3] нет корней  !
// [-9, 0, -2] нет корней  !
// [0, 45, 0] нет корней  !
// [0, 0, 7] нет корней  !
// [0, -4, -5] нет корней  !
// [-1, -2, -3] нет корней  !
// [-1, 2, -3] нет корней  !
// [0, 0, -7] нет корней  !
// [0, -64, -8] нет корней  !
// [0, -64, 8] нет корней  !
// [0, 64, -8] нет корней  !