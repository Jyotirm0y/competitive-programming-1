// author: Rodrigo Alves
// judge: URI
// problem: Difference
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1007
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
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%s = %d\n", "DIFERENCA", (a * b) - (c * d));

  return 0;
}
