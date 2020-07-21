// author: Rodrigo Alves Vieira
// problem: Above Average
// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1311
// status: AC
#include <cstdio>
#include <string.h>
using namespace std;

double percent_of(int a, int b) {
  double da = a;
  double db = b;

  return (da * 100.0)/db;
}

int main() {
  int C, n, g, total, avg, totalAbvAvg;
  int series[1000] = {};

  scanf("%d", &C);

  while (C--) {
    total = 0;
    totalAbvAvg = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
      scanf("%d", &g);
      total += g;
      series[i] = g;
    }

    avg = total / n;

    for (int i = 0; i < n; i++) {
      if (series[i] > avg) {
	totalAbvAvg++;
      }
    }

    printf("%.3f%%\n", percent_of(totalAbvAvg, n));
  }

  return 0;
}
