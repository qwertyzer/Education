#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int calc(int vasya_left, int vasya_right, int masha_left, int masha_right);

int main() {
  long int p, v, m, q, vasya_left, vasya_right, masha_left, masha_right;

  scanf("%ld %ld", &p, &v);
  scanf("%ld %ld", &q, &m);

  vasya_left = p - v;
  vasya_right = p + v;
  masha_left = q - m;
  masha_right = q + m;

  printf("%d", calc(vasya_left, vasya_right, masha_left, masha_right));

  return 0;
}

int calc(int vasya_left, int vasya_right, int masha_left, int masha_right) {
  long int result, vasya_tree, masha_tree;

  vasya_tree = abs(vasya_right - vasya_left + 1);
  masha_tree = abs(masha_right - masha_left + 1);

  if (vasya_left < masha_left && vasya_right < masha_left) {
    result = vasya_tree + masha_tree;
  } else if (vasya_right >= masha_left && vasya_right <= masha_right &&
             vasya_left <= masha_left) {
    result = vasya_tree + masha_tree - abs(vasya_right - masha_left + 1);
  } else if ((vasya_left == masha_left && vasya_right == masha_right) ||
             (vasya_left < masha_left && vasya_right > masha_right)) {
    result = vasya_tree;
  } else if (masha_left < vasya_left && masha_right < vasya_left) {
    result = vasya_tree + masha_tree;
  } else if ((masha_left == vasya_left && masha_right == vasya_right &&
              masha_left <= vasya_left) ||
             (masha_left < vasya_left && masha_right > vasya_right)) {
    // printf("penis\n");
    result = masha_tree;
  } else if (masha_right >= vasya_left && masha_right <= vasya_right) {
    result = vasya_tree + masha_tree - abs(masha_right - vasya_left + 1);
  }

  return result;
}

// [1 2 3 4 (5 6 7] [5 6 7) 8 9]
// [1 2 3 4 5 6 7 8 9] [5 6 7 8 9]
// [5 6 7 8 9] [1 2 3 4 5 6 7 8 9]
// [-1 0 1] [-2 -1 0 1 2]