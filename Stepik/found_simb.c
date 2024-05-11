#include <stdio.h>
#include <string.h>

int main() {
  char simb, string[256];
  int i = 0;
  scanf("%c\n", &simb);
  fgets(string, 256, stdin);
  while (string[i] != '\0') {
    if (string[i] == simb) {
      printf("%d", i);
      return 0;
    }
    i++;
  }
  printf("-1");
  return 0;
}