// author: Rodrigo Alves
// problem: Searching for Nessy
// url: http://uva.onlinejudge.org/external/110/11044.html
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int grid[10002];

int main()
{
  int T, N, M, S;
  scanf("%d", &T);

  while (T--) {
    S = 0;
    scanf("%d %d", &N, &M);

    S = (N / 3) * (M / 3);

    printf("%d\n", S);
  }

  return 0;
}
