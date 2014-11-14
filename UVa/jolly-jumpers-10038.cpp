// author: Rodrigo Alves
// problem: Jolly Jumpers
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=24&problem=979
// status: AC

#include <cstdio>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M, x;
  bool jolly;
  vector<int> sequence;
  vector<int> diff;

  while (scanf("%d", &N) != EOF) {
    M = N;

    while (N--) {
      scanf("%d", &x);
      sequence.push_back(x);
    }

    for (int i = 0; i < sequence.size() - 1; i++) diff.push_back(fabs(sequence[i+1] - sequence[i]));

    sort(diff.begin(), diff.end());

    jolly  = true;

    for (int i = 0; i < M - 1; i++) {
      if (diff[i] != i+1) {
        jolly = false;
        break;
      }
    }

    sequence.clear();
    diff.clear();

    if (jolly) printf("%s\n", "Jolly");
    else printf("%s\n", "Not jolly");
  }

  return 0;
}
