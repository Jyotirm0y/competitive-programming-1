// author: Rodrigo Alves
// problem: Pie
// url: https://icpcarchive.ecs.baylor.edu/external/36/3635.pdf
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, s, n) for (int i = s; i < n; i++)
#define DIFF 1e-6
#define ZERO 0.0
#define TWO 2.0
#define HEIGHT 1;
#define PI acos(-1);

typedef vector<int> vi;

double pies_radii[100100];
double aux[100100];

bool check(double x, int n, int m) {
  FOR (i, 0, n) aux[i] = pies_radii[i];
  int cont = 0;

  FOR (i, 0, n) {
    while (aux[i] >= x) {
      aux[i] -= x;
      cont++;
    }
  }

  return cont >= m;
}

int main()
{
  int TC, N, F;
  double V, S, E, MID;

  scanf("%d", &TC);

  while (TC--) {
    scanf("%d %d", &N, &F);
    F++; // my friends are eatin', but so am I

    V = 0.0;

    FOR (i, 0, N) {
      scanf("%lf", &pies_radii[i]);

      pies_radii[i] = pies_radii[i] * pies_radii[i] * PI;
      if (V < pies_radii[i]) V = pies_radii[i];
    }

    S = ZERO, E = V, MID = E / TWO;

    while (E - S > DIFF) {
      MID = (E + S) / TWO;

      if (check(MID, N, F)) S = MID;
      else E = MID;
    }

    printf("%.4lf\n", S);
  }

  return 0;
}
