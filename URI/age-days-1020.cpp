// author: Rodrigo Alves
// judge: URI
// problem: Age in Days
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
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
  int n, days = 0, months = 0, years = 0;
  scanf("%d", &n);

  while (n - 365 > 0) {
    n -= 365;
    years++;
  }

  while (n - 30 > 0) {
    n -= 30;
    months++;
  }

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, n);

  return 0;
}
