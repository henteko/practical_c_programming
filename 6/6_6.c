/****************************************************************
 * 6-6実習
 * 1週間の労働時間と時間給を入力すると、
 * その週の賃金を出力する
 * ただし、40時間を超えた分は1.5倍する(1時間を1時間30分として換算)
 * **************************************************************/
#include <stdio.h>

float time; /* 労働時間 */
float jikixyu; /* 時間給 */
int total; /* 賃金 */
char line[50]; /* 入力のtmp */
int main() {
  printf("労働時間と時間給を入力してください(例: 40 1000): ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f %f", &time, &jikixyu);

  total = 0.0; /* 初期化 */
  if(time > 40.0) { /* 労働時間が40時間より多かったら */
    total = 40.0 * jikixyu; /* 40時間分を計算してtotalに入れる */
    time -= 40.0; /* 労働時間から40時間引く */
    time *= 1.5; /* 労働時間を1.5倍する */
  }
  total += time * jikixyu;

  printf("総賃金: %d", total);
  return 0;
}