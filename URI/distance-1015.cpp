// author: Rodrigo Alves
// judge: URI
// problem: Distance Between Two Points
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1015
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
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  printf("%.4lf\n", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
  return 0;
}
