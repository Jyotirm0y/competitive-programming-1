// author: Rodrigo Alves
// problem: Football
// url: https://icpcarchive.ecs.baylor.edu/external/65/6530.pdf
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define WIN 3
#define DRAW 1
#define LOSS 0

typedef vector<long long> vi;

int main()
{
  long long N, G, S, R, total;

  while (scanf("%lld %lld", &N, &G) != EOF) {
    total = 0;
    vi matches;

    while (N--) {
      scanf("%lld %lld", &S, &R);

      if (S == R) {
        if (G > 0) {
          G--;
          total += WIN;
        } else total++;
      } else if (S > R) total += WIN;
      else if ((S < R) & (G > 0)) matches.push_back(S - R);
    }

    sort(matches.begin(), matches.end());

    for (int i = matches.size() - 1; i >= 0 && G; i--) {
      G += matches[i];

      if (G > 0) {
        G--;
        total += WIN;
      } else if (G == 0) total++;
    }

    printf("%lld\n", total);
  }

  return 0;
}
