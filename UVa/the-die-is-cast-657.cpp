// author: Rodrigo Alves
// problem: The Die is Cast
// url: http://uva.onlinejudge.org/external/6/657.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)

int main()
{
  int w, h;
  char maze[w][h];

  while (scanf("%d %d", &w, &h), w!= 0 && h != 0) {
    FOR (i, w) scanf("%s", maze[i]);

    for (int i = 0; i < w; i++) {
      for (int j = 0; j < h; j++) {
        printf("%c", maze[i][j]);
      }

      printf("\n");
    }
  }

  return 0;
}
