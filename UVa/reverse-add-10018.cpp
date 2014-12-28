// author: Rodrigo Alves
// problem: Reverse and Add
// url: http://uva.onlinejudge.org/external/100/10018.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

int reverse(int num)
{
  int d = 0, reversed = 0;

  for (int i = num; i != 0; i /= 10) {
    d = i % 10;
    reversed *= 10;
    reversed += d;
  }

  return reversed;
}

bool is_palindrome(int n)
{
  return n == reverse(n);
}

int main()
{
  int N, P, counter;
  scanf("%d", &N);

  while (N--) {
    scanf("%d", &P);
    counter = 0;

    while (!is_palindrome(P)) {
      P += reverse(P);
      counter++;
    }

    printf("%d %d\n", counter, reverse(P));
  }

  return 0;
}
