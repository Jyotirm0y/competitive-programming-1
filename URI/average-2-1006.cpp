// author: Rodrigo Alves
// judge: URI
// problem: Average 2
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1006
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
  double A, B, C, total;

  scanf("%lf %lf %lf", &A, &B, &C);

  total = (A * 2.0) + (B * 3.0) + (C * 5.0);
  total /= 10;

  printf("%s = %.1lf\n", "MEDIA", total);

  return 0;
}
