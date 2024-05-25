#include <stdio.h>

int main() {
  char string_1[52], string_2[52];
  scanf("%s", string_1);
  scanf("%s", string_2);
  printf("%s.%s", string_1, string_2);

  return 0;
}