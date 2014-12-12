// author: Rodrigo Alves
// problem: Aeroporto
// url: http://br.spoj.com/problems/AERO
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, V, X, Y, topDest, counter = 0;
  while (scanf("%d %d", &A, &V) && (A != 0 || V != 0)) {
    vector<int> answers;
    vector<int> airports(105);

    topDest = 0;

    while (V--) {
      scanf("%d %d", &X, &Y);
      airports[X-1] += 1;
      airports[Y-1] += 1;
    }

    for (int i = 0; i < A; i++) {
      if (airports[i] > topDest) topDest = airports[i];
    }

    for (int j = 0; j < A; j++) {
      if (airports[j] == topDest) answers.push_back(j+1);
    }

    printf("%s %d\n", "Teste", ++counter);

    for (int k = 0; k < answers.size(); k++) {
      if (k != answers.size() - 1) printf("%d ", answers[k]);
      else printf("%d", answers[k]);
    }

    printf("\n\n");
  }

  return 0;
}
