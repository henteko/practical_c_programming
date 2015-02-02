/***************
 * 7_5実習
 * 入力された値が素数かどうかを判定する
 * 入力は2以上かつ整数でないといけないです
 * ************/

#include <stdio.h>

int target; /* 入力された値 */
int loop; /* ループ変数 */
int flag; /* 素数かどうかのフラグ */
char line[50]; /* 入力用tmp */

int main() {
  printf("値を入力してください(整数, 2以上): ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &target);

  flag = 1; /* フラグの初期化 */
  for(loop = 2; loop < target; loop++) {
    if(target % loop == 0) {
      flag = 0; /* 素数ではないので0にする */
    }
  }

  if(flag) {
    printf("素数です！\n");
  }else {
    printf("素数ではないです！\n");
  }
  return 0;
}
