#include <cmath>
#include <iostream>
#include <vector>

#define AMBIGUOUS -1
#define CONTRADICTION -2

std::vector<int> calculation(int apartment_1, int apartment_2,
                             int count_of_floors, int entrance_number_2,
                             int number_of_floors_2);
bool parameters_positive_check_func(int apartment_1, int apartment_2,
                                    int count_of_floors, int entrance_number_2,
                                    int number_of_floors_2);
int entrance_number_1_calculation_func(int apartment_1, int count_of_floors,
                                       int X);
int number_of_floors_1_calculation_func(int apartment_1, int entrance_number_1,
                                        int count_of_floors, int X);
int count_apartment_on_floor_func(int apartment_2, int entrance_number_2,
                                  int count_of_floors, int number_of_floors_2);

int main() {
  int apartment_1, apartment_2, count_of_floors, entrance_number_2,
      number_of_floors_2;
  std::cin >> apartment_1 >> count_of_floors >> apartment_2 >>
      entrance_number_2 >> number_of_floors_2;
  std::vector<int> result =
      calculation(apartment_1, apartment_2, count_of_floors, entrance_number_2,
                  number_of_floors_2);
  for (int i : result) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}

std::vector<int> calculation(int apartment_1, int apartment_2,
                             int count_of_floors, int entrance_number_2,
                             int number_of_floors_2) {
  std::vector<int> result(2);
  bool check =
      parameters_positive_check_func(apartment_1, apartment_2, count_of_floors,
                                     entrance_number_2, number_of_floors_2);
  int X = count_apartment_on_floor_func(apartment_2, entrance_number_2,
                                        count_of_floors, number_of_floors_2);
  int entrance_number_1 =
      entrance_number_1_calculation_func(apartment_1, count_of_floors, X);
  int number_of_floors_1 = number_of_floors_1_calculation_func(
      apartment_1, entrance_number_1, count_of_floors, X);
  if (check == false) {
    result[0] = -1;
    result[1] = -1;
  } else if (X == AMBIGUOUS) {
    result[0] = 0;
    result[1] = 1;
  } else {
    if (number_of_floors_1 == CONTRADICTION) {
      result[0] = -1;
      result[1] = -1;
    } else if (entrance_number_1 == CONTRADICTION) {
      result[0] = -1;
      result[1] = -1;
    } else {
      result[0] = entrance_number_1;
      result[1] = number_of_floors_1;
    }
  }
  return result;
}

bool parameters_positive_check_func(int apartment_1, int apartment_2,
                                    int count_of_floors, int entrance_number_2,
                                    int number_of_floors_2) {
  return (apartment_1 > 0 && apartment_2 > 0 && count_of_floors > 0 &&
          entrance_number_2 > 0 && number_of_floors_2 > 0);
}

int count_apartment_on_floor_func(int apartment_2, int entrance_number_2,
                                  int count_of_floors, int number_of_floors_2) {
  if (entrance_number_2 == 1 && number_of_floors_2 == 1) {
    return AMBIGUOUS;
  }

  double result =
      (apartment_2 - 1) /
      ((entrance_number_2 - 1) * count_of_floors + (number_of_floors_2 - 1));
  if (result != round(result)) {
    return AMBIGUOUS;
  } else {
    return static_cast<int>(result);
  }
}

int entrance_number_1_calculation_func(int apartment_1, int count_of_floors,
                                       int X) {
  if (count_of_floors == 0 || X == 0) {
    return CONTRADICTION;
  }
  double apartment_1_double = static_cast<double>(apartment_1);
  double count_of_floors_double = static_cast<double>(count_of_floors);
  double X_double = static_cast<double>(X);
  return static_cast<int>(
      ceil(apartment_1_double / (count_of_floors_double * X_double)));
}

int number_of_floors_1_calculation_func(int apartment_1, int entrance_number_1,
                                        int count_of_floors, int X) {
  if (X == 0) {
    return CONTRADICTION;
  }
  double apartment_1_double = static_cast<double>(apartment_1);
  double entrance_number_1_double = static_cast<double>(entrance_number_1);
  double count_of_floors_double = static_cast<double>(count_of_floors);
  double X_double = static_cast<double>(X);
  return static_cast<int>(
      ceil((apartment_1_double - (entrance_number_1_double - 1) *
                                     count_of_floors_double * X_double) /
           X_double));
}