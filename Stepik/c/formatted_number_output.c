#include <stdio.h>
#include <string.h>

int main() {
  char string[52];
  int count, i = 0;
  fgets(string, 52, stdin);
  count = strlen(string) - 1;
  if (count <= 3) {
    printf("%s", string);
  } else {
    if (count % 3 == 0) {
      while (string[i] != '\0') {
        printf("%c", string[i]);
        if ((i + 1) % 3 == 0) {
          printf(" ");
        }
        i++;
      }
    } else if ((count + 1) % 3 == 0) {
      printf("%c%c ", string[0], string[1]);
      i = 2;
      while (string[i] != '\0') {
        printf("%c", string[i]);
        if ((i + 2) % 3 == 0) {
          printf(" ");
        }
        i++;
      }
    } else if ((count + 2) % 3 == 0) {
      printf("%c ", string[0]);
      i = 1;
      while (string[i] != '\0') {
        printf("%c", string[i]);
        if ((i + 3) % 3 == 0) {
          printf(" ");
        }
        i++;
      }
    }
  }
  return 0;
}