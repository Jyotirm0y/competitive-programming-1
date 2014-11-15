// author: Rodrigo Alves
// judge: URI
// problem: Game Time
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1046
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

  printf("O JOGO DUROU %d HORA(S)\n", (24 - A) + B);

  return 0;
}
