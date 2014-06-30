// author: Rodrigo Alves
// problem: Peter Smokes
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1287
// status: AC

#include <stdio.h>

int main()
{
    int N, K, total;

    while(scanf("%d %d", &N, &K) != EOF) {
      total = N;

      while (N >= K) {
        total = total + N/K;
        N = (N / K) + (N % K);
      }

      printf("%d\n", total);
    }

    return 0;
}
