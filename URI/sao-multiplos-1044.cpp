// author: Rodrigo Alves
// Judge: URI
// problem: Sao Multiplos
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1044
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
  int A, B;
  scanf("%d %d", &A, &B);

  if (A > B) {
    if (A % B == 0) printf("%s\n", "Sao Multiplos");
    else printf("%s\n", "Nao sao Multiplos");
  } else {
    if (B % A == 0) printf("%s\n", "Sao Multiplos");
    else printf("%s\n", "Nao sao Multiplos");
  }

  return 0;
}
