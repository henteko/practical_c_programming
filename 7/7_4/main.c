/*********************
 * 7_4実習
 * 指定された金額に5%の消費税を加算した結果を表示する
 * ******************/
#include <stdio.h>

int kingaku; /* 入力された金額 */
int result; /* 結果 */
const float ZEI = 0.05; /* 消費税 */
char line[50]; /* 入力用tmp */

int main() {
  printf("金額を入力してください: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &kingaku);

  result = kingaku + kingaku * ZEI;
  printf("結果: %d\n", result);

  return 0;
}
