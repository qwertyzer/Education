#include <stdio.h>
#include <string.h>

int main() {
  int x = 0, y = 0, count, step = 0;
  char string[10];

  scanf("%d", &count);

  for (int i = 0; i != count; i++) {
    scanf("%s %d", string, &step);
    switch (string[0]) {
      case 'N':
        y += step;
        break;
      case 'S':
        y -= step;
        break;
      case 'E':
        x += step;
        break;
      case 'W':
        x -= step;
        break;
    }
  }
  printf("%d %d", x, y);

  return 0;
}