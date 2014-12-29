// author: Rodrigo Alves
// problem: Reverse and Add
// url: http://uva.onlinejudge.org/external/100/10018.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

long long reverse(long long num)
{
  long long d = 0, reversed = 0;

  for (long long i = num; i != 0; i /= 10) {
    d = i % 10;
    reversed *= 10;
    reversed += d;
  }

  return reversed;
}

bool is_palindrome(long long n)
{
  return n == reverse(n);
}

int main()
{
  long long N, P, counter;
  scanf("%lld", &N);

  while (N--) {
    scanf("%lld", &P);
    counter = 0;

    while (!is_palindrome(P)) {
      P += reverse(P);
      counter++;
    }

    printf("%lld %lld\n", counter, reverse(P));
  }

  return 0;
}
