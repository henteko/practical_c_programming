/*******************
 * 7_3実習
 * 960バイト/sの転送速度のシリアルケーブルがあったとき、
 * 入力されたバイト数は何秒で終了するかを出力する
 * *****************/

#include <stdio.h>

int bite; /* 入力されたバイト数(バイト) */
int result; /* 結果(秒) */
const int TENSOU = 960; /* 1秒間の転送速度(バイト) */
char line[50]; /* 入力用tmp */

int main() {
  printf("バイト数を指定してください: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &bite);

  result = bite / TENSOU;
  printf("結果: %d秒\n", result);
  return 0;
}
