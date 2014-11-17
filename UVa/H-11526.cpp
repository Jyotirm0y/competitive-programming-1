// author: Rodrigo Alves
// problem: H(n)
// url: http://uva.onlinejudge.org/external/115/p11526.pdf
// status: AC
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
using namespace std;

#define fr(a, b, c) for(int a = b; a < c; a++)
#define rep(a, b) fr(a, 0, b)

typedef long long ll;
typedef pair<int,int> pii;

long long H(int n)
{
  if (n == 0) return n;
  long long length = (long long) sqrt(n), lastQuo, calc = n, sum = 0;

  for (int i = 1; i <= length; i++) {
    sum += n/i;
    sum += (calc - n/i) * (i - 1);
    calc = n/i;
  }

  if (calc > length) sum += length;
  return sum;
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
