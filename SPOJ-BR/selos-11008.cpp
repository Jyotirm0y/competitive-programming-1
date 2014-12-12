// author: Rodrigo Alves
// problem: Selos
// url: http://br.spoj.com/problems/SELOS11
// status: AC
#include <bits/stdc++.h>

int main()
{
  long long int N;
  scanf("%lld", &N);

  long long int squareRoot = sqrt(N);
  bool prime = true;

  if (N % 2 == 0 && N != 2) {
  	prime = false;
  } else {
  	for (int i = 2; i <= squareRoot; i++) {
  		if (N % i == 0) prime = false;
  	}
  }

  if (prime) printf("%s\n", "N");
  else printf("%s\n", "S");

  return 0;
}
