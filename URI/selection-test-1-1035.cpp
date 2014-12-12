// author: Rodrigo Alves
// judge: URI
// problem: Selection Test 1
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1035
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C, D;
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if (B > C && D > A && ((C + D) > (A + B)) && (C > 0 && D > 0) && A % 2 == 0) {
    printf("Valores aceitos\n");
  } else {
    printf("Valores nao aceitos\n");
  }

  return 0;
}
