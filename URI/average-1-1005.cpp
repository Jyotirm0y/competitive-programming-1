// author: Rodrigo Alves
// judge: URI
// problem: Average 1
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1005
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double A, B, total;
  scanf("%lf %lf", &A, &B);

  total = (A * 3.5) + (B * 7.5);
  total /= 11;

  printf("%s = %.5lf\n", "MEDIA", total);

  return 0;
}
