#include <stdio.h>
#include <stdlib.h>

int main() {
  char simb;
  scanf("%c", &simb);
  printf("%c %c", simb - 1, simb + 1);

  return 0;
}