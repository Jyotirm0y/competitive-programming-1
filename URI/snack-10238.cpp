// author: Rodrigo Alves
// judge: URI
// problem: Snack
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1038
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
  int X, Y;
  double prices[5] = { 4.0, 4.5, 5, 2, 1.5 };

  scanf("%d %d", &X, &Y);
  printf("%s: R$ %.2lf\n", "Total", prices[X-1] * Y);

  return 0;
}
