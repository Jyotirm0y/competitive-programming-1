// author: Rodrigo Alves
// problem: Easy Dijkstra
// url: http://www.spoj.com/problems/EZDIJKST
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
  int N, V, K, A, B, a, b, c;
  vector<vii> AdjList;

  scanf("%d", &N);

  while (N--) {
    scanf("%d %d", &V, &K);

    AdjList.assign(V + 1, vii());

    while (K--) {
      scanf("%d %d %d", &a, &b, &c);
      AdjList[a].push_back(ii(b, c));
    }

    scanf("%d %d", &A, &B);

    vi dist(V + 1, INF); dist[A] = 0;

    priority_queue< ii, vector<ii>, greater<ii> > heap;
    heap.push(ii(0, A));

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

    if (dist[B] == INF) printf("NO\n");
    else printf("%d\n", dist[B]);

    AdjList.clear();
  }

  return 0;
}
