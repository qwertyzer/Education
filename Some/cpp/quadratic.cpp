#include <cmath>
#include <iostream>

#define NRR "No real roots"

double answer_1(double D, int a, int b);
double answer_2(double D, int a, int b);
double discriminant(int a, int b, int c);

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  double D = discriminant(a, b, c);
  if (D < 0) {
    std::cout << NRR << std::endl;
  } else {
    std::cout << answer_1(D, a, b) << " " << answer_2(D, a, b) << std::endl;
  }
  return 0;
}

double answer_1(double D, int a, int b) { return (-b + sqrt(D)) / (2 * a); }

double answer_2(double D, int a, int b) { return (-b - sqrt(D)) / (2 * a); }

double discriminant(int a, int b, int c) { return pow(b, 2) - (4 * a * c); }