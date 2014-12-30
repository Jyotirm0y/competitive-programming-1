// author: Rodrigo Alves
// problem: Number Maze
// url: http://uva.onlinejudge.org/external/9/p929.pdf
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int maze[1000][1000];

int main()
{
  int T, N, M, S, answer;
  scanf("%d", &T);

  vector<vii> AdjList;

  while (T--) {
    scanf("%d", &N);
    scanf("%d", &M);

    AdjList.assign(N, vii());

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        scanf("%d", &maze[i][j]);
      }
    }

    S = maze[N-1][M-1];

    vi dist(N, INF); dist[S] = 0;

    priority_queue< ii, vector<ii>, greater<ii> > heap;
    heap.push(ii(0, S));

    AdjList.clear();
  }

  return 0;
}
