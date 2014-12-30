// author: Rodrigo Alves
// problem: Ubiquitous Religions
// url: http://uva.onlinejudge.org/external/105/10583.html
// status: AC
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
  	N++;

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

  int size() { return numSets; }
};

int main()
{
	int n, m, i, j, counter = 1;

	while (scanf("%d %d", &n, &m), n != 0 && m != 0) {
		UnionFind UF(n);

		while (m--) {
			scanf("%d %d", &i, &j);

			if (!UF.isSameSet(i, j)) {
				UF.unionSet(i, j);
			}
		}

		printf("Case %d: %d\n", counter++, UF.size() - 1);
	}

	return 0;
}