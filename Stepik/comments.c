#include <stdio.h>

int main() {
  char string[128];
  int i = 0, j, begin = 0;
  fgets(string, 128, stdin);
  while (string[i] != '\0') {
    if (string[i] == '/' && string[i + 1] == '*' && string[i + 2] != '/') {
      j = i;
      while (string[j] != '\0') {
        if (string[j] == '*' && string[j + 1] == '/') {
          begin = 1;
        }
        j++;
      }
    } else if (string[i] == '*' && string[i + 1] == '/') {
      // end = 1;
      if (begin != 0) {
        i += 2;
      }
      begin = 0;
    }
    // if ((begin == 1) || (end == 1)) {
    //   end = 1;
    //   begin = 1;
    // }
    if (begin == 0) {
      printf("%c", string[i]);
    }
    // printf("%c %d %d\n", string[i], begin, end);
    i++;
  }

  return 0;
}