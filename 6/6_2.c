/***************************
 * 6-2実習
 * 正解(%)から成績を表示する
 *
 * 成績表
 * 0  ~ 60(%):  F
 * 61 ~ 70(%):  D
 * 71 ~ 80(%):  C
 * 81 ~ 90(%):  B
 * 91 ~ 100(%): A
 * *************************/
#include <stdio.h>

int total_success; /* 総合正解数(%) */
int main() {
  total_success = 91;

  /* 成績表より成績を決定して表示する */
  if (total_success <= 60) {
    printf("成績: F\n");
  }else if (total_success <= 70) {
    printf("成績: D\n");
  }else if (total_success <= 80) {
    printf("成績: C\n");
  }else if (total_success <= 90) {
    printf("成績: B\n");
  }else if (total_success <= 100) {
    printf("成績: A\n");
  }

  return 0;
}
