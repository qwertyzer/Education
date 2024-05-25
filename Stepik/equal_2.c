#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char string_1[52], string_2[52];
  fgets(string_1, 52, stdin);
  fgets(string_2, 52, stdin);
  for (int i = 0; i <= 52; i++) {
    string_1[i] = tolower(string_1[i]);
    string_2[i] = tolower(string_2[i]);
  }
  strcmp(string_1, string_2) == 0 ? printf("yes") : printf("no");

  return 0;
}