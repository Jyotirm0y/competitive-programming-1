// author: Rodrigo Alves Vieira
// problem: Brick Wall Patterns
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=841
// status: AC
#include <bits/stdc++.h>

long long table[51];

void walls(int n)
{
  table[0] = table[1] = 1;
  for (int i = 2; i < n; i++) table[i] = table[i-1] + table[i-2];
}

int main()
{
  walls(51);
  int N;

  while (scanf("%d", &N), N != 0) {
    printf("%lld\n", table[N]);
  }

  return 0;
}
