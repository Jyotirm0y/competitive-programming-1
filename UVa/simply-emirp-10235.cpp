// author: Rodrigo Alves
// problem: Simply Emirp
// url: http://uva.onlinejudge.org/external/102/10235.html
// status: AC

#include <stdio.h>
#include <math.h>

bool isprime(long number)
{
  if (number == 0 or number == 1 or (number != 2 && number % 2 == 0)) return false;

  for (long i = 2; i <= sqrt(number); i++) {
    if (number % i == 0 && i != number) return false;
  }

  return true;
}

long reverse(long num)
{
    long rev_num = 0;
    while (num > 0) {
      rev_num = rev_num * 10 + num % 10;
      num = num / 10;
    }
    return rev_num;
}

int main()
{

    long N, reverseN;
    bool diff;

    while (scanf("%ld", &N) != EOF) {
      diff = true;
      reverseN = reverse(N);

      if (N == reverseN) diff = false;

        if (isprime(N)) {
          if (isprime(reverseN) && diff) {
            printf("%ld is emirp.\n", N);
          } else {
            printf("%ld is prime.\n", N);
          }

        } else {
          printf("%ld is not prime.\n", N);
        }
    }

    return 0;
}
