// author: Rodrigo Alves Vieira
// problem: Alaska
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2950
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define TRIP 1422
#define MAX_MILES 200
#define FOR(i, n) for(int i = 1; i < n; i++)

int main()
{
  int N, C, sum, number, previous;
  bool possible, first;
  vector<int> paths;

  while (scanf("%d", &N), N != 0) {
    for (int i = 0; i < N; i++ ) {
      scanf ("%d", &number);
      paths.push_back(number);
    }

    sort(paths.begin(), paths.end());
    possible = true;

    FOR (i, N) {
      if (paths[i] - paths[i - 1] > MAX_MILES) possible = false;
    }

    if (2 * (TRIP - paths[N - 1]) > MAX_MILES) possible = false;

    if (possible) printf("POSSIBLE\n");
    else printf("IMPOSSIBLE\n");

    paths.clear();
  }

  return 0;
}
