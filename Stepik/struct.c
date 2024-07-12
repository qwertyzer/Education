#include <stdio.h>
#include <stdlib.h>

struct person {
  int age;
  int weight;
  int rost;
  char *name;
};

int main() {
  struct person keril;
  keril.age = 20;
  keril.rost = 183;
  keril.weight = 84;
  keril.name = (char *)malloc(50 * sizeof(char));  // Выделяем память для имени

  if (keril.name == NULL) {
    printf("Ошибка выделения памяти\n");
    return 1;
  }

  printf("Enter name: ");
  scanf("%s", keril.name);

  printf("Name: %s\nAge: %d\nWeight: %d\nRost: %d\n", keril.name, keril.age,
         keril.weight, keril.rost);
  return 0;
}