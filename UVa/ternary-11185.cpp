// author: Rodrigo Alves
// problem: Ternary
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=23&page=show_problem&problem=2126
// status: AC

#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
  long long N, rem;

  while (scanf("%lld", &N), N >= 0) {
    if (N == 0) printf("%lld", N);

    vector<long long> list;

    while (N > 0) {
      rem = N % 3;
      N = N / 3;

      list.push_back(rem);
    }

    for (int i = list.size() - 1; i >= 0; i--) {
      printf("%lld", list[i]);
    }

    printf("\n");
    list.clear();
  }

  return 0;
}
