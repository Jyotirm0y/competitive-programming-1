// author: Rodrigo Alves
// problem: Simply Emirp
// url: http://uva.onlinejudge.org/external/102/10235.html
// status: WA
#include <stdio.h>
#include <math.h>

bool isprime(int number)
{
  for (int i = 2; i <= sqrt(number); i++) {
    if (number % i == 0 && i != number) return false;
  }

  return true;
}

int reverse(int num)
{
    int rev_num = 0;
    while (num > 0) {
      rev_num = rev_num * 10 + num % 10;
      num = num / 10;
    }
    return rev_num;
}

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        if (isprime(N)) {
          if (isprime(reverse(N))) {
            printf("%d is emirp.\n", N);
          } else {
            printf("%d is prime.\n", N);
          }

        } else {
          printf("%d is not prime.\n", N);
        }
    }

    return 0;
}
