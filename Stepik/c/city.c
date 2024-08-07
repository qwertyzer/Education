#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char string_1[52], string_2[52];
  scanf("%s", string_1);
  scanf("%s", string_2);
  if ((tolower(string_1[strlen(string_1) - 1]) ==
       tolower(string_2[strlen(string_2) - 1])) ||
      tolower(string_1[0]) == tolower(string_2[0])) {
    printf("yes");
  } else {
    printf("no");
  }
  return 0;
}