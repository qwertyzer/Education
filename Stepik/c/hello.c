#include <stdio.h>

int main() {
  char str1[40] = "Hello, ";
  char str2[20];
  scanf("%s", str2);
  printf("%s%s", str1, str2);

  return 0;
}