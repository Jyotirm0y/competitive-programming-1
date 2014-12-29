// author: Rodrigo Alves
// problem: Parity
// url: http://uva.onlinejudge.org/external/109/10931.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;

int main()
{
  long long I, B, P;

  while (scanf("%lld", &I), I != 0) {
    P = 0;
    vc output;

    for (long long i = 0; I != 0; i++) {
      if (I & 1) {
        output.push_back('1');
        P++;
      } else {
        output.push_back('0');
      }

      I = I >> 1;
    }

    printf("The parity of ");
    for (int i = output.size() - 1; i >= 0; i--) printf("%c", output[i]);
    printf(" is %lld (mod 2).\n", P);
  }

  return 0;
}
