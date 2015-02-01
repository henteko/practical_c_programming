/**********************************************
 * 6-4実習
 * 入力された金額(セント)の内訳を表示する
 * 25, 10, 5, 1(セント)の中から枚数を計算する
 * *******************************************/
#include <stdio.h>

int total; /* 総金額(セント) */
int twenty_five_count; /* 25セントの枚数 */
int ten_count; /* 10セントの枚数 */
int five_count; /* 5セントの枚数 */
int one_count; /* 1セントの枚数 */
char line[50]; /* 入力のtmp */
int main() {
  /* 総金額の入力 */
  printf("総金額を入力してください(セント): ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &total);

  /* 25セントの計算 */
  twenty_five_count = total / 25;
  total -= (twenty_five_count * 25);

  /* 10セントの計算 */
  ten_count = total / 10;
  total -= (ten_count * 10);

  /* 5セントの計算 */
  five_count = total / 5;
  total -= (five_count * 5);

  one_count = total; /* 残りは全て1セントにする */

  printf("25セント: %d, 10セント: %d, 5セント: %d, 1セント: %d\n", 
      twenty_five_count, ten_count, five_count, one_count);
  return 0;
}
