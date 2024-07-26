#include <iostream>

int numWaterBottles(int numBottles, int numExchange);

int main() {
  int numBottles, numExchange;
  std::cin >> numBottles >> numExchange;
  std::cout << numWaterBottles(numBottles, numExchange) << std::endl;
  return 0;
}

int numWaterBottles(int numBottles, int numExchange) {
  int drinkBottles = numBottles, emptyBottles = 0;
  while (numBottles + emptyBottles >= numExchange) {
    emptyBottles = numBottles + emptyBottles;
    numBottles = emptyBottles / numExchange;
    emptyBottles = emptyBottles - (numBottles * numExchange);
    drinkBottles += numBottles;
  }
  return drinkBottles;
}