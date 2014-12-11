// problem: Reduzindo Mapa
#include <bits/stdc++.h>
using namespace std;

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

  int findSet(int i) {
    return (p[i] == i) ? i : (p[i] = findSet(p[i]));
  }

  bool isSameSet(int i, int j) {
    return findSet(i) == findSet(j);
  }

  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) {
      numSets--;
      int x = findSet(i), y = findSet(j);

      // rank is used to keep the tree short
      if (rank[x] > rank[y]) {
        p[y] = x; setSize[x] += setSize[y];
      } else {
        p[x] = y; setSize[y] += setSize[x];

        if (rank[x] == rank[y]) rank[y]++;
      }
    }
  }

  int numDisjointSets() {
    return numSets;
  }

  int sizeOfSet(int i) {
    return setSize[findSet(i)];
  }
};

int main()
{
  int mst_cost, N, M, U, V, C;
  scanf("%d", &N);
  scanf("%d", &M);

  vector< pair<int, ii> > Edgelist;

  for (int i = 0; i < M; i++) {
    scanf("%d %d %d", &U, &V, &C);
    Edgelist.push_back(make_pair(C, ii(U, V)));
  }

  sort(Edgelist.begin(), Edgelist.end());

  mst_cost = 0;
  UnionFind UF(V);

  for (int i = 0; i < M; i++) {
    if (UF.numDisjointSets() == 1) break;

    pair<int, ii> front = Edgelist[i];

    if (!UF.isSameSet(front.second.first, front.second.second)) {
      mst_cost += front.first;
      UF.unionSet(front.second.first, front.second.second);
    }
  }

  printf("%d\n", mst_cost);

  return 0;
}
