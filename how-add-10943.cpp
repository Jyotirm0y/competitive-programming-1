// author: Rodrigo Alves
// problem: How do you add?
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1884
// status: AC
#include <stdio.h>
#define N 105
#define NUM 1000000
#define FOR(i, n) for(int i = 0; i < n; i++)
#define FORE(i,n) for(int i = 0; i <= n; ++i)

int table[N][N];

int ways(int n,int k)
{
  if (n < 0 || k < 0) return 0;
  if (table[n][k] != -1) {
      return table[n][k];
  } else {
      int i;
      unsigned int res = 0;
      for(i = 0; i <= n; i++) res += (ways(n-i, k-1) % NUM);
      return table[n][k] = res % NUM;
  }
}

int main()
{
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      table[i][j]=-1;
    }
  }

  table[0][0]=1;

  while (scanf("%d %d", &i, &j), i != 0 && j != 0) {
    printf("%d\n", ways(i, j));
  }

  return 0;
}
