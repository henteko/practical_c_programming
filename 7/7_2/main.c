/************************
 * 7_2実習
 * 2つの日付を入力させて、
 * その間の日数を出力する
 *
 * グレゴリオ暦0年1月1日から
 * 数えた日付の差を計算する
 * 式1: 365 × 年 ＋ int( 年 ÷ 4 ) － int( 年 ÷ 100 ) ＋ int( 年 ÷ 400 )
 * 式2: 30 × 月 ＋ int( ( 月 ＋ 1 ) × 3 ÷ 5 ) ＋ 日 － 33
 * また、月が1, または2の場合は月を13, 14として年を-1する
 * **********************/

#include <stdio.h>
#include <math.h>

int year1, year2; /* 年 */
int month1, month2; /* 月 */
int day1, day2; /* 日 */
int result1, result2; /* それぞれのグレゴリオ暦0年1月1日からの日数 */
int result; /* 結果 */
char line[50]; /* 入力用tmp */

int main () {
  /* 1つ目の入力 */
  printf("1つ目の日付: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &year1, &month1, &day1);

  /* 2つ目の入力 */
  printf("2つ目の日付: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &year2, &month2, &day2);

  /* 1つめの計算 */
  /* 月が1, 2だったら年を-1して月を+12する */
  if(month1 == 1 || month1 == 2) {
    year1--;
    month1 += 12;
  }
  result1 = 365 * year1 + floor(year1 / 4.0) - floor(year1 / 100.0) + floor(year1 / 400.0);
  result1 += (30 * month1) + floor((month1 + 1) * 3.0 / 5.0) + day1 - 33;

  /* 2つめの計算 */
  /* 月が1, 2だったら年を-1して月を+12する */
  if(month2 == 1 || month2 == 2) {
    year2--;
    month2 += 12;
  }
  result2 = 365 * year2 + floor(year2 / 4.0) - floor(year2 / 100.0) + floor(year2 / 400.0);
  result2 += 30 * month2 + floor((month2 + 1) * 3.0 / 5.0) + day2 - 33;

  result = result2 - result1;
  printf("結果: %d\n", result);

  return 0;
}
