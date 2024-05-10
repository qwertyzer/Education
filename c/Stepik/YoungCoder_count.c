#include <stdio.h>
#include <string.h>

int main() {
  char string[256];
  int count = 0, i = 0;
  fgets(string, 256, stdin);
  while (string[i] != '\0') {
    if ((string[i] != ' ' && string[i + 1] == ' ') ||
        (string[i] != ' ' && string[i + 1] == '\n')) {
      count++;
    }
    i++;
  }
  printf("%d", count);

  return 0;
}