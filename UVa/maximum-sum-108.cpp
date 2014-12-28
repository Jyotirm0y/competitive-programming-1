// author: Rodrigo Alves
// problem: Maximum Sum
// url: http://uva.onlinejudge.org/external/1/108.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)

int main()
{
  int N;
  int matrix[101][101];
  long long answer = 0;

  scanf("%d", &N);

  FOR (i, N) {
    for (int j = 0; j < N; j++) scanf("%d", &matrix[i][j]);
  }

  printf("%lld\n", answer);

  return 0;
}
