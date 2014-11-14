// author: Rodrigo Alves
// judge: URI
// problem: Easy Fibonacci
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1151
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  long long N, number;
  vector<long long> table;
  table.push_back(0);
  table.push_back(1);

  for (int i = 2; i < 47; i++) table.push_back(table[i-1] + table[i-2]);

  scanf("%lld", &N);
  printf("%d", 0);

  for (int i = 1; i < N; i++) printf(" %lld", table[i]);
  printf("\n");

  return 0;
}
