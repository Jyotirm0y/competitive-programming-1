// author: Rodrigo Alves
// judge: URI
// problem: Average 3
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1040
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double A, B, C, D, avg, lastScore;
  scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

  A *= 2.0;
  B *= 3.0;
  C *= 4.0;
  D *= 1.0;

  avg = (A + B + C + D) / 10.0;

  printf("Media: %.1lf\n", avg);

  if (avg >= 7.0) {
    printf("Aluno aprovado.\n");
  } else if (avg >= 5.0 && avg <= 6.9) {
    printf("Aluno em exame.\n");

    scanf("%lf", &lastScore);
    printf("Nota do exame: %.1lf\n", lastScore);

    avg += lastScore;
    avg /= 2.0;

    if (avg >= 5.0) printf("Aluno aprovado.\nMedia final: %.1lf\n", avg);
    else printf("Aluno reprovado.\nMedia final: %.1lf\n", avg);

  } else if (avg < 5.0) {
    printf("Aluno reprovado.\n");
  }

  return 0;
}
