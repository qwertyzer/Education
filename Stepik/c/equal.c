#include <stdio.h>
#include <string.h>

int main() {
  char string_1[52], string_2[52];
  scanf("%s", string_1);
  scanf("%s", string_2);
  strcmp(string_1, string_2) == 0 ? printf("yes") : printf("no");

  return 0;
}