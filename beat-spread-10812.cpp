// author: Rodrigo Alves
// problem: Beat the Spread
// url: http://uva.onlinejudge.org/external/108/10812.html
// status: AC
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;

int main()
{
  unsigned int N, s, d, score_a, score_b;

  scanf("%u", &N);

  while (N--) {
    scanf("%u %u", &s, &d);

    if (s >= d && (s + d) % 2 == 0) {
      score_a = (s + d) / 2;
      score_b = (s - d) / 2;

      printf("%u %u\n", score_a, score_b);
    } else {
      printf("%s\n", "impossible");
    }
  }

  return 0;
}
