// author: Rodrigo Alves
// judge: URI
// problem: Multiples of 13
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1132
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X, Y, start, end, answer = 0;
  scanf("%d %d", &X, &Y);

  if (X > Y) {
    start = Y;
    end = X;
  } else {
    start = X;
    end = Y;
  }

  for (int i = start; i <= end; i++) {
    if (i % 13 != 0) answer += i;
  }

  printf("%d\n", answer);

  return 0;
}
