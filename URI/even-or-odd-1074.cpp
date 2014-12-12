// author: Rodrigo Alves
// judge: URI
// problem: Even or Odd
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1074
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long N, number;
  scanf("%ld", &N);

  while (N--) {
    scanf("%ld", &number);
    if (number == 0) {
      printf("%s\n", "NULL");
    } else if (number % 2 == 0) {
      if (number > 0) printf("%s\n", "EVEN POSITIVE");
      else printf("%s\n", "EVEN NEGATIVE");
    } else {
      if (number > 0) printf("%s\n", "ODD POSITIVE");
      else printf("%s\n", "ODD NEGATIVE");
    }
  }

  return 0;
}
