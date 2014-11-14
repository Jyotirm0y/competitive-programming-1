// author: Rodrigo Alves
// problem: Goldbach's Conjecture
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=484
// status: AC

#include <cstdio>
#include <bitset>
#include <map>
#include <vector>
using namespace std;

bitset<10000010> bs;
map<int, bool> is_prime;
vector<long long> primes;

void sieve(long long upper_bound) {
  bs.set();
  bs[0] = bs[1] = 0;

  for (long long i = 2; i <= upper_bound + 1; i++) {
    if (bs[i]) {
      for(long long j = i * i; j <= upper_bound + 1; j += i) bs[j] = 0;
      primes.push_back((int) i);
      is_prime[i] = true;
    }
  }
}

int main()
{
  long long N, i;
  sieve(1000000);

  while(scanf("%lld", &N), N != 0) {
    for (i = 0; i < N; i++) {
      if (is_prime[N - primes[i]]) break;
    }

    printf("%lld = %lld + %lld\n", N, primes[i], N - primes[i]);
  }

  return 0;
}
