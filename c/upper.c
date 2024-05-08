#include <ctype.h>
#include <stdio.h>

int main() {
  char simb;
  scanf("%c", &simb);
  printf("%c", toupper(simb));
  return 0;
}