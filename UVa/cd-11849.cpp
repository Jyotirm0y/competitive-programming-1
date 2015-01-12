// author: Rodrigo Alves
// problem: CD
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define ZERO 0

typedef vector<int> vi;

int main()
{
  int N, M, cd, count;
  map<int, bool> jack;

  while (true) {
    scanf("%d %d", &N, &M);
    if (N == ZERO && M == ZERO) break;

    count = 0;

    while (N--) {
      scanf("%d", &cd);
      jack[cd] = true;
    }

    while (M--) {
      scanf("%d", &cd);
      if (jack[cd] == true) count++;
    }

    printf("%d\n", count);
    jack.clear();
  }

  return 0;
}
