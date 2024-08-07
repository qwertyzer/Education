#include <stdio.h>
#include <string.h>

int main() {
  char string[52];
  while (scanf("%s", string) == 1) {
    for (int i = strlen(string) - 1; i >= 0; i--) {
      printf("%c", string[i]);
    }
    printf(" ");
  }

  return 0;
}