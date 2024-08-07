#include <stdio.h>

int main() {
  int n;
  int z = 0;
  scanf("%d", &n);
  if (n > 0) {
    z = (n * (n + 1)) / 2;
  } else if (n <= 0) {
    for (int i = 1; i > n; i--) {
      z = n + i;
    }
  }
  printf("%d", z);

  return 0;
}