// author: Rodrigo Alves
// problem: Sending Email
// url: http://uva.onlinejudge.org/external/109/10986.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
  int N, n, m, S, T, u, v, w;
  vector<vii> AdjList;

  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    scanf("%d %d %d %d", &n, &m, &S, &T);

    AdjList.assign(n, vii());

    while (m--) {
      scanf("%d %d %d", &u, &v, &w);
      AdjList[u].push_back(ii(v, w));
      AdjList[v].push_back(ii(u, w));
    }

    vi dist(n, INF); dist[S] = 0;

    priority_queue< ii, vector<ii>, greater<ii> > heap;
    heap.push(ii(0, S));

    while (!heap.empty()) {
      ii front = heap.top(); heap.pop();

      int d = front.first, u = front.second;

      if (d > dist[u]) continue;
      for (int j = 0; j < AdjList[u].size(); j++) {

        ii v = AdjList[u][j];

        if (dist[u] + v.second < dist[v.first]) {
          dist[v.first] = dist[u] + v.second;
          heap.push(ii(dist[v.first], v.first));
        }
      }
    }

    if (dist[T] == INF) printf("Case #%d: %s\n", i, "unreachable");
    else printf("Case #%d: %d\n", i, dist[T]);

    AdjList.clear();
  }

  return 0;
}
