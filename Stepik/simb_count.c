#include <ctype.h>
#include <stdio.h>

int main() {
  int N, ASCII_simb, first_num = 1;
  scanf("%d", &N);
  char stroka_simb[N];
  int array[26];

  for (int i = 0; i < N; i++) {
    scanf(" %c", &stroka_simb[i]);
    stroka_simb[i] = toupper(stroka_simb[i]);
  }

  for (int i = 0; i != 26; i++) {
    array[i] = 0;
  }
  for (int i = 0; i < N; i++) {
    ASCII_simb = 65;
    for (int j = 0; j < 26; j++) {
      if (stroka_simb[i] == ASCII_simb) {
        array[j] += 1;
      }
      ASCII_simb++;
    }
  }

  for (int i = 0; i != 26; i++) {
    if (first_num == 1) {
      printf("%d", array[i]);
      first_num++;
    } else {
      printf(" %d", array[i]);
    }
  }
  return 0;
}