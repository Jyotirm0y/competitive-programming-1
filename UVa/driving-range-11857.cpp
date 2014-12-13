// author: Rodrigo Alves
// problem: Driving Range
// url: http://uva.onlinejudge.org/external/118/11857.html
// status: WA
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for(int i = 0; i < n; i++)
#define UNVISITED 0
#define VISITED 1

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

class UnionFind {
private:
  vector<int> p, rank, setSize;
  int numSets;

public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0); p.assign(N, 0);
    for (int i = 0; i < N; i++) p[i] = i;
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }

  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) {
      numSets--;
      int x = findSet(i), y = findSet(j);

      if (rank[x] > rank[y]) {
        p[y] = x; setSize[x] += setSize[y];
      } else {
        p[x] = y; setSize[y] += setSize[x];
        if (rank[x] == rank[y]) rank[y]++;
      }
    }
  }
};

vector<vii> AdjList;
vi visited;

void dfs(int u)
{
  if (visited[u]) return;
  visited[u] = VISITED;

  FOR(i, AdjList[u].size()) {
    ii v = AdjList[u][i];
    if (visited[v.first] == UNVISITED) dfs(v.first);
  }
}

int main()
{
  int n, m, U, V, w, answer;
  bool possible;

  while (scanf("%d %d", &n, &m), m != 0 || n != 0) {
    possible = true;

    AdjList.assign(n, vii());
    visited.assign(n, UNVISITED);
    vector< pair<int, ii> > Edgelist;

    while (m--) {
      scanf("%d %d %d", &U, &V, &w);
      AdjList[U].push_back(ii(V, w));
      AdjList[V].push_back(ii(U, w));

      Edgelist.push_back(make_pair(w, ii(U, V)));
      Edgelist.push_back(make_pair(w, ii(V, U)));
    }

    dfs(0);

    FOR (i, n) {
      if (!visited[i]) {
        possible = false;
        break;
      }
    }

    if (possible) {
      answer = 0;
      sort(Edgelist.begin(), Edgelist.end());

      UnionFind UF(n);

      for (int i = 0; i < Edgelist.size(); i++) {
        pair<int, ii> front = Edgelist[i];

        if (!UF.isSameSet(front.second.first, front.second.second)) {
          if (front.first > answer) answer = front.first;
          UF.unionSet(front.second.first, front.second.second);
          Edgelist.pop_back();
        }
      }
      printf("%d\n", answer);
    } else {
      printf("%s\n", "IMPOSSIBLE");
    }

    AdjList.clear();
    visited.clear();
  }

  return 0;
}
