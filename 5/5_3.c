/*************************
 * 5-3実習
 * 長方形の外周を出力
 * 式: 外周=2 x (縦 + 横)
 * **********************/
#include <stdio.h>

float width; /* 縦(cm) */
float height; /* 横(cm) */
float sum; /* 外周(cm) */
int main() {
  width = 3.0;
  height = 2.0;
  sum = 2 * (width + height); /* 式により外周を計算 */
  printf("外周: %f\n", sum);
  return 0;
}
