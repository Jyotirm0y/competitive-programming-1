// author: Rodrigo Alves
// problem: World Cup Noise
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=193&page=show_problem&problem=1391
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

long long table[100];

void fn()
{
    table[0] = 1;
    table[1] = 2;

    for (long long i = 2; i <= 50; i++) table[i] = table[i-1] + table[i-2];
}

int main()
{
  fn();

  int N, K, answer;

  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    scanf("%d", &K);
    printf("%s #%d:\n", "Scenario", i);
    printf("%lld\n", table[K]);
    printf("\n");
  }
  return 0;
}
