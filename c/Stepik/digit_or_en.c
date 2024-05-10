#include <stdio.h>

int main() {
  char n;
  scanf("%c", &n);

  if (n > 47 && n < 58) {
    printf("digit");
  } else if ((n > 64 && n < 91) || (n > 96 && n < 123)) {
    printf("en");
  } else {
    printf("error");
  }

  return 0;
}