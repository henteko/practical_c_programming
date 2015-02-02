/*****************************
 * 7_1実習
 * マイルをkmに変換する
 * **************************/
#include <stdio.h>

float mile; /* 入力されたマイル(マイル) */
float km; /* 結果(km) */
const float MILE_TO_KM = 1.609; /* 1マイルあたりのkm */
char line[50]; /* 入力用のtmp */

int main() {
  printf("マイルを入力してください: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &mile);

  km = mile * MILE_TO_KM; /* 計算 */
  printf("km: %f\n", km);

  return 0;
}
