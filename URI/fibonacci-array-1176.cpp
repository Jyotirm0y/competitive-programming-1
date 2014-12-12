// author: Rodrigo Alves
// judge: URI
// problem: Fibonacci Array
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/11176
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long N, number;
  vector<long long> table;
  table.push_back(0);
  table.push_back(1);

  for (int i = 2; i < 61; i++) table.push_back(table[i-1] + table[i-2]);

  scanf("%lld", &N);

  while (N--) {
    scanf("%lld", &number);
    printf("Fib(%lld) = %lld\n", number, table[number]);
  }

  return 0;
}
