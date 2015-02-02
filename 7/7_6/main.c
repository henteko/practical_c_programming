/*****************
 * 7_6実習
 * 5つの数を入力して、その中に正の数はいくつか、負の数はいくつかを出力する
 * ***************/

#include <stdio.h>

int nums[] = {0, 0, 0, 0, 0}; /* 入力値の配列[5] */
int sei = 0; /* 正の数 */
int fu = 0; /* 負の数 */
char line[50]; /* 入力用tmp */

int main() {
  printf("数を5つ入力してください: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

  for(int i=0; i < 5; i++) {
    if(nums[i] >= 0) { /* 0以上は正とする */
      sei++;
    }else {
      fu++;
    }
  }

  printf("正: %d, 負: %d\n", sei, fu);
}
