// author: Rodrigo Alves Vieira
// problem: Brick Game
// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2986
// status: AC
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int T, N, playah, mid;

// Solution is O(N lg N) because I appealed to sort()
int main() {
  scanf("%d", &T);

  for (int ca = 0; ca < T; ca++) {
    scanf("%d", &N);

    int list[N];
    mid = N/2;

    for (int i = 0; i < N; i++) {
      scanf("%d", &playah);
      list[i] = playah;
    }

    sort(list, list + N);

    printf("Case %d: %d\n", ca + 1, list[mid]);
  }

  return 0;
}
