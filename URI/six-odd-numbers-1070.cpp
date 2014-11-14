// author: Rodrigo Alves
// judge: URI
// problem: Six Odd Numbers
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1070
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
  int n, count = 6;
  scanf("%d", &n);

  for (int i = n; i < n + 13 && count > 0; i++) {
    if (i % 2 != 0) {
      printf("%d\n", i);
      count--;
    }
  }

  return 0;
}
