// author: Rodrigo Alves
// problem: Torre de Hanói
// url: http://br.spoj.com/problems/OBIHANOI
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, counter = 0;

  while (scanf("%d", &N) && N != 0) {
    printf("Teste %d\n%.0f\n\n", ++counter, pow(2, N) - 1);
  }

  return 0;
}
