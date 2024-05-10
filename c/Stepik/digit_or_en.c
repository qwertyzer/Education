#include <stdio.h>

int main() {
  int n;

  if (scanf("%d", &n)) {
    printf("digit");
  } else if ((n > 64 && n < 91) || (n > 96 && n < 123)) {
    printf("en");
  } else {
    printf("error");
  }

  return 0;
}