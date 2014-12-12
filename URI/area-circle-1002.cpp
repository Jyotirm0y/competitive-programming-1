// author: Rodrigo Alves
// judge: URI
// problem: Area of a Circle
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1002
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double pi = 3.14159, R;
  scanf("%lf", &R);

  printf("%s=%.4lf\n", "A", pi * (R*R));

  return 0;
}
