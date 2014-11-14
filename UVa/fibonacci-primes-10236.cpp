// author: Rodrigo Alves
// problem: Fibonacci Primes
// url: http://uva.onlinejudge.org/external/102/10236.html
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define MAX 249450
#define NINE_DIGITS 1e9

int table[22001];
bool vis[MAX];

int main()
{
  long long a = 0, b = 1, tmp, i, j;
  int n, cp;

  for (cp = 1, i = 2; cp < 22001; ++i) {
    tmp = a + b, a = b, b = tmp;
    if (b >= 1e18) b /= 10, a /= 10;

    if (!vis[i]) {
      tmp = b;
      while (tmp >= NINE_DIGITS) {
        tmp /= 10;
      }

      table[cp++] = tmp;
      for (j = i * i; j < MAX; j += i) vis[j] = true;
    }
  }

  table[1] = 2, table[2] = 3;

  while (scanf("%d", &n) == 1) {
    printf("%d\n", table[n]);
  }

  return 0;
}
