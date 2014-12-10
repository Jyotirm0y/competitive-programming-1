// problem: H(n)
// url: http://uva.onlinejudge.org/external/115/p11526.pdf
// status: AC
#include <bits/stdc++.h>
using namespace std;

long long H(int n){
  if (n == 0) return 0;
  long long ans = 0;
  int r = (int) floor(sqrt(n));

  if (r * r == n) {
    ans += n/r;
    --r;
  }

  for (int i = 1; i <= r; ++i) {
    ans += n / i;
    ans += max(0, n / i-r);
  }

  return ans;
}

int main()
{
  int T, N;
  scanf("%d", &T);

  while (T--) {
    scanf("%d", &N);
    printf("%lld\n", H(N));
  }

  return 0;
}
