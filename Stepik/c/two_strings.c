#include <stdio.h>
#include <string.h>

int main() {
  char first_string[32], second_string[32];
  int count = 0, i = 0;

  fgets(first_string, 32, stdin);
  fgets(second_string, 32, stdin);

  while (first_string[i] != '\0' && second_string[i] != '\0') {
    if (first_string[i] != second_string[i]) {
      count++;
      // printf("%c %c\n", first_string[i], second_string[i]);
    }
    i++;
  }
  printf("%d", count);

  return 0;
}