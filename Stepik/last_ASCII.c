#include <stdio.h>

int main() {
  int K;
  scanf("%d", &K);

  for (int i = K; i != 0; i--) {
    printf("%c", 91 - i);
  }

  return 0;
}