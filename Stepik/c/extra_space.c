#include <stdio.h>
#include <string.h>

int main() {
  char string[256];
  fgets(string, 256, stdin);
  int dlina = strlen(string), first = 0;
  if (string[0] == ' ' && first == 0) {
    first++;
  }
  for (int i = first; i < dlina; i++) {
    if (string[i] != ' ') {
      printf("%c", string[i]);
    } else {
      if (string[i + 1] != ' ') {
        printf("%c", string[i]);
      }
    }
  }

  return 0;
}