/***************************
 * 6-3実習
 * 正解(%)から成績を表示する
 * また、6-2を修正して、正解率の1のくらいに基づいて+や-をつける
 *
 * 成績表
 * 0  ~ 60(%):  F
 * 61 ~ 70(%):  D
 * 71 ~ 80(%):  C
 * 81 ~ 90(%):  B
 * 91 ~ 100(%): A
 *
 * 成績修飾値
 * 1 ~ 3 -
 * 4 ~ 7 なし
 * 8 ~ 0 +
 * *************************/
#include <stdio.h>

int total_success; /* 総合正解数(%) */
int hitoketame; /* 総合正解数の一桁目(%) */
int main() {
  total_success = 100;
  hitoketame = total_success % 10;

  /* 成績表より成績を決定して表示する */
  if (total_success <= 60) {
    printf("成績: F");
  }else if (total_success <= 70) {
    printf("成績: D");
  }else if (total_success <= 80) {
    printf("成績: C");
  }else if (total_success <= 90) {
    printf("成績: B");
  }else if (total_success <= 100) {
    printf("成績: A");
  }

  /* 成績修飾値により付与 */
  if (hitoketame >= 1 && hitoketame <= 3) { /* 1 ~ 3 */
    printf("-\n");
  }else if(hitoketame >= 4 && hitoketame <= 7) { /* 4 ~ 7 */
    printf("\n");
  }else if (hitoketame >= 8 || hitoketame == 0) { /* 8 ~ 9, 0 */
    printf("+\n");
  }

  return 0;
}
