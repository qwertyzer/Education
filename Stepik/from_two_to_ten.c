#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  char string[30];
  int result = 0, pre_res = 0, j = 0, dlina;

  fgets(string, 30, stdin);
  dlina = strlen(string);
  for (int i = dlina - 2; i >= 0; i--) {
    if (string[i] == '1') {
      pre_res = pow(2, j);
    } else if (string[i] == '0') {
      pre_res = 0;
    }
    result += pre_res;
    // printf("string = %c, i = %d, pre_res = %d\n", string[i], i, pre_res);
    pre_res = 0;
    j++;
  }
  // printf("%d\n", dlina);
  printf("%d\n", result);
  return 0;
}