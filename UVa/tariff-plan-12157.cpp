// author: Rodrigo Alves Vieira
// problem: Tariff Plan
// url: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3309
// status: AC
#include <cstdio>

int main() {
  int T, N, i, duration, totalCostMile, totalCostJuice;
  scanf("%d", &T);

  for (i = 1; i <= T; i++) {
    scanf("%d", &N);
    totalCostMile = 0;
    totalCostJuice = 0;

    while (N--) {
      scanf("%d", &duration);

      totalCostMile += (duration / 29) + ((duration % 29 == 0) ? 0 : 1);
      totalCostJuice += (duration / 59) + ((duration % 59 == 0) ? 0 : 1);
    }

    totalCostMile *= 10;
    totalCostJuice *= 15;

    if (totalCostMile > totalCostJuice) {
      printf("Case #%d: Juice %d\n", i, totalCostJuice);
    } else if (totalCostJuice > totalCostMile) {
      printf("Case #%d: Mile %d\n", i, totalCostMile);
    } else {
      printf("Case #%d: Mile Juice %d\n", i, totalCostMile);
    }
  }

  return 0;
}
