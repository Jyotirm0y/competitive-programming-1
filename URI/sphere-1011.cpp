// author: Rodrigo Alves
// judge: URI
// problem: Sphere
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1011
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
  double r, pi = 3.14159;
  scanf("%lf", &r);

  r *= 4 * pi * r * r;
  r /= 3;

  printf("%s = %.3lf\n", "VOLUME", r);

  return 0;
}
