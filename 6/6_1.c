/**********************************
 * 6-1実習
 * 2点間の距離の2乗を計算する
 * また、その結果から距離を逆算する
 * 式: √(x_2 - x_1)^2 + (y_2 - y_1)^2
 *  *******************************/
#include <stdio.h>
#include <math.h>

float x_1, x_2; /* 点のx座標 */
float y_1, y_2; /* 点のy座標 */
float x, y; /* 2点のx, yの差の2乗 */
double distance; /* 2点間の距離 */
int main() {
  x_1 = 1.0;
  y_1 = 1.0;
  x_2 = 4.0;
  y_2 = 5.0;

  x = (x_2 - x_1) * (x_2 - x_1);
  y = (y_2 - y_1) * (y_2 - y_1);
  distance = sqrt(x + y);
  printf("距離の2乗: %f\n", distance * distance);
  printf("2乗から距離を出力: %f\n", sqrt(distance * distance));
  return 0;
}

