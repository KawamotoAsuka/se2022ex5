#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x, y, z;  // xdyとｚは能力値
  printf(
      "\nTHIS  IS  DICE  FOR  TRPG\nputs number like\nfirst number d second "
      "number\nfirstnumber:");
  scanf("%d", &x);
  printf("second number:");
  scanf("%d", &y);
  printf("what is your ability score:");
  scanf("%d", &z);
  // こっから計算a
  srand((unsigned int)time(NULL));
  int i, a, r;  // rが判定結果
  a = 0;
  r = 0;
  for (i = 0; i < x; i = i + 1) {
    r = r + 1 + rand() % y;
  }
  if (r <= 5) {
    printf("\n%d critica!!\n", r);
  } else if (r <= z) {
    printf("\n%d normal success\n", r);
  } else if (r >= 96) {
    printf("\n!!critical failed!!\n");
  } else {
    printf("\n%d failed\n", r);
  }
  return (0);
}
/*このプログラムはTRPGというアナログなゲームで使えるものです。
xdy(x回y面ダイスを振る)で出た数値の合計がabilityscore以下なら成功となります */