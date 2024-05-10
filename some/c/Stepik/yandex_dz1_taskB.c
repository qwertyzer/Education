#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int calc(int G_1, int G_2, int G_3, int G_4, int first_game_place);

int main() {
  int G_1, G_2, G_3, G_4, first_game_place;

  scanf("%d:%d", &G_1, &G_2);
  scanf("%d:%d", &G_3, &G_4);
  scanf("%d", &first_game_place);

  printf("%d", calc(G_1, G_2, G_3, G_4, first_game_place));

  return 0;
}

int calc(int G_1, int G_2, int G_3, int G_4, int first_game_place) {
  int result;
  if (first_game_place == 1) {
    if (G_1 > G_2) {
      if (G_3 > G_4) {
        result = 0;
        // 5:4
        // 2:1
      } else if (G_3 == G_4) {
        // 5:4
        // 0:0
        result = 1;
      } else {
        // 5:4
        // 0:2
        result = G_4 + 1;
      }
    } else if (G_1 == G_2) {
      if (G_3 > G_4) {
        // 5:5
        // 2:0
        result = abs(G_2 - G_3 + 1);
      } else if (G_3 == G_4) {
        // 5:5
        // 2:2
        result = 1;
      } else {
        // 5:5
        // 0:5
        result = G_2 + 1;
      }
    } else {
      if (G_3 > G_4) {
        // 3:5
        // 1:0
        result = G_2 - G_3 + 1;
      } else if (G_3 == G_4) {
        // 2:5
        // 4:4
        result = G_2 - G_3 + 1;
      } else {
        // 2:5
        // 1:4
        result = G_2 - G_3 + 3;
      }
    }
  } else {
    if (G_1 > G_2) {
      if (G_3 > G_4) {
        // 5:2
        // 3:1
        result = 0;
      } else if (G_3 == G_4) {
        // 5:2
        // 5:5
        result = 1;
      } else {
        // 5:3
        // 2:4
        result = G_4 - G_2 + 1;
      }
    } else if (G_1 == G_2) {
      if (G_3 > G_4) {
        // 3:3
        // 5:4
        result = G_4 - G_2 + 1;
      } else if (G_3 == G_4) {
        // 3:3
        // 5:5
        result = G_4 - G_2 + 1;
      } else {
        // 3:3
        // 4:5
        result = G_4 - G_2 + 2;
      }
    } else {
      if (G_3 > G_4) {
        // 2:3
        // 1:0
        result = G_2 - G_3 + 1;
      } else if (G_3 == G_4) {
        // 2:3
        // 1:1
        result = G_2 - G_3 + 1;
      } else {
        // 2:3
        // 0:1
        result = G_2 + G_4 + 1;
      }
    }
  }
  return result;
}

// 0:0
// 0:0
// 1

// 0:2
// 0:3
// 2