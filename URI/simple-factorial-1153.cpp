// author: Rodrigo Alves
// judge: URI
// problem: Simple Factorial
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1153
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define MAX 15

long long dp[MAX];

int main()
{
  dp[0] = dp[1] = 1;
  for (int i = 2; i < MAX; i++) dp[i] = i * dp[i-1];

  int N;
  scanf("%d", &N);

  printf("%lld\n", dp[N]);

  return 0;
}
