// author: Rodrigo Alves
// judge: URI
// problem: Consumption
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1014
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
  double X, Y;
  scanf("%lf %lf", &X, &Y);

  printf("%.3lf km/l\n", X/Y);

  return 0;
}
