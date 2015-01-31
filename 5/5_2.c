/*************************
 * 5-2実習
 * 球の体積を計算する
 * 式: 4/3πr^3
 * **********************/
#include <stdio.h>

float r; /* 球の半径(cm) */
float sum; /* 球の体積(cm3) */
const float PI = 3.12;
int main() {
  r = 3.0;
  sum = (4.0 / 3.0) * PI * (r * r * r); /* 式を使用して体積を計算する */
  printf("体積: %f\n", sum);
  return 0;
}
