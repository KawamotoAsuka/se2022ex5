#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {
  int x, y, z;  // xdyとｚ(能力値)を聞く
  printf(
      "\nTHIS  IS  DICE  FOR  TRPG\nputs number like\nfirst number d second "
      "number\n");
  int f;  // f is for loop
  f = 0;
  do {
    printf("\nfirst number:");
    scanf("%d", &x);
    printf("second number:");
    scanf("%d", &y);
    printf("what is your ability score:");
    scanf("%d", &z);
    // こっから計算a
    srand((unsigned int)time(NULL));
    int i, r;  // rが結果
    r = 0;
    // ダイスを振る
    for (i = 0; i < x; i = i + 1) {
      r = r + 1 + rand() % y;
    }
    // 判定
    if (r <= 5)
      printf("\n %d !! critica !!\n", r);
    else if (r <= z)
      printf("\n %d normal success\n", r);
    else if (r >= 96)
      printf("\n %d !! critical failed !!\n", r);
    else
      printf("\n%d failed\n", r);
    // 結果を見せるために1.3秒待たせる
    int millisecond = 13 * 100;
    Sleep(millisecond);
    // do loop or not?
    printf("\n\ndo you  want to loop?\n yes= 0 \n no= 1\n:");
    scanf("%d", &f);
  } while (f == 0);
  return (0);
}
/*このプログラムはTRPGというアナログなゲームで使えるものです。
xdy(x回y面ダイスを振る)で出た数値の合計がabilityscore以下なら成功となります */