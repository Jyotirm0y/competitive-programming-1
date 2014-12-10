// problem: Reduzindo Mapa
#include <bits/stdc++.h>
using namespace std;

class Vertex {
public:
  int vertex;
  int pathLength;

  Vertex() {};
  Vertex(int v, int p): vertex(v), pathLength(p) {};
};

int main()
{
  int N, M, U, V, C;
  scanf("%d", &N);
  scanf("%d", &M);

  vector<vector<Vertex> > vertices(N, vector<Vertex>());

  for (int i = 0; i < M; i++) {
    scanf("%d %d %d", &U, &V, &C);

    Vertex vertex(V, C);
    vertices[U-1].push_back(vertex);
  }

  return 0;
}
