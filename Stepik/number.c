#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[32];
  int i = 0, error = 0, count_point = 0, count_minus = 0;

  fgets(string, 32, stdin);

  if (string[0] == '.' || string[strlen(string) - 2] == '.') {
    printf("error");
    return 0;
  }

  while (string[i] != '\0' && string[i] != '\n') {
    if (!((i == 0 && string[i] == '-') ||
          (string[i] == '.' || (string[i] >= '0' && string[i] <= '9'))) &&
        (string[i] != '\0' && string[i] != '\n')) {
      error++;
      break;
    }

    if (string[i] == '-') {
      count_minus++;
    }

    if (string[i] == '.') {
      count_point++;
    }

    i++;
  }

  if (count_point == 1 && error == 0 &&
      (count_minus == 0 || count_minus == 1)) {
    printf("float");
  } else if (count_point == 0 && error == 0 &&
             (count_minus == 0 || count_minus == 1)) {
    printf("int");
  } else {
    printf("error");
  }

  return 0;
}