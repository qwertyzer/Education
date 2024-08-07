#include <stdio.h>
#include <string.h>

int main() {
  char string[50];
  int flag = 0;
  while (scanf("%s ", string) == 1) {
    if (string[strlen(string)] == '\n') flag = 1;
    if (string[0] == string[strlen(string) - 1]) {
      printf("%s ", string);
      if (flag == 1 && string[0] == string[strlen(string) - 2]) {
        printf("%s", string);
        return 0;
      }
    }
  }
  return 0;
}