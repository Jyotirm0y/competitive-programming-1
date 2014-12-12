// author: Rodrigo Alves
// judge: URI
// problem: Dividing X by Y
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1116
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double N, X, Y;
  scanf("%lf", &N);

  while (N--) {
    scanf("%lf %lf", &X, &Y);

    if (Y == 0) {
      printf("%s\n", "divisao impossivel");
      continue;
    } else {
      printf("%.1lf\n", X / Y);
    }
  }

  return 0;
}
