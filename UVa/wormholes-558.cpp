// author: Rodrigo Alves
// problem: Wormholes
// url: http://uva.onlinejudge.org/external/5/558.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main()
{
  int c, s, a, b, w, n, m, x, y, t;
  vector<vii> AdjList;
  
  scanf("%d", &c);

  while (c--) {
    scanf("%d %d", &n, &m);

    AdjList.assign(n, vii());
    
    for (int i = 0; i < m; i++) {
      scanf("%d %d %d", &x, &y, &t);
      AdjList[x].push_back(ii(y, t));
    }

    // Bellman Ford routine
    vi dist(n, INF); dist[s] = 0;
    for (int i = 0; i < n - 1; i++) { // relax all E edges n-1 times, overall O(nm)
      for (int u = 0; u < n; u++) {                       // these two loops = O(m)
        for (int j = 0; j < (int)AdjList[u].size(); j++) {
          ii v = AdjList[u][j];        // we can record SP spanning here if needed
          dist[v.first] = min(dist[v.first], dist[u] + v.second);         // relax
        }
      }
    }
    
    bool hasNegativeCycle = false;
    
    for (int u = 0; u < n; u++) {                         // one more pass to check
      for (int j = 0; j < (int) AdjList[u].size(); j++) {
        ii v = AdjList[u][j];
        
        if (dist[v.first] > dist[u] + v.second) {                // should be false
          hasNegativeCycle = true;     // but if true, then negative cycle exists!
        }
      }
    }

    printf("%s\n", hasNegativeCycle ? "possible" : "not possible");
  }
  
  return 0;
}
