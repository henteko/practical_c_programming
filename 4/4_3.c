/*****************************************
 * 4-3の実習
 * 長方形の面積と外周を計算して出力します
 *
 * ***************************************/
#include <stdio.h>

float inti;         /* 1インチのcm数(単位:cm) */
float width_inti;   /* 横のインチ数(単位:インチ) */
float height_inti;  /* 縦のインチ数(単位:インチ) */
float width;        /* 横のcm数(単位:cm) */
float height;       /* 縦のcm数(単位:cm) */
int main() {
  inti        = 2.54; /* 1インチは2.54cmである */
  width_inti  = 3.0;  /* 違うインチ数の計算をするときはここを変更する */
  height_inti = 5.0;  /* 違うインチ数の計算をするときはここを変更する */
  width       = width_inti * inti;
  height      = height_inti * inti;

  /* 面積と外周を出力する */
  /* 面積は底辺 x 高さ */
  /* 外周は横 x 2 + 縦 x 2 */
  printf("長方形の面積: %f, 長方形の外周: %f\n",
      width * height,
      (width * 2) + (height * 2));

  return 0;
}
