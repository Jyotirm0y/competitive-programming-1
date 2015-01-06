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

typedef vector<int> vi;

int main()
{
  int N, G, S, R, total, aux;

  while (scanf("%d %d", &N, &G) != EOF) {
    total = 0;
    vi goals;
    vi results;

    while (N--) {
      scanf("%d %d", &S, &R);

      if (S > R) {
        total += WIN;
      } else if (S == R) {
        goals.push_back(DRAW);
      } else {
        goals.push_back(LOSS);
        results.push_back(S - R);
      }
    }

    sort(goals.begin(), goals.end());

    for (int i = goals.size() - 1; i >= 0 && G; i--) {
      if (goals[i] == DRAW) {
        total += WIN;
        goals[i] = WIN;
        G--;
      } else { // LOSS
        aux = (results[i] * -1) + 1;

        if ((G - aux) >= 0) {
          total += WIN;
          G -= aux;
          goals[i] = WIN;
        }
      }
    }

    FOR (i, goals.size()) if (goals[i] == DRAW) total += goals[i];

    printf("%d\n", total);
  }

  return 0;
}
