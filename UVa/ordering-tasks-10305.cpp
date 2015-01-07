/**
 * problem: Ordering Tasks
 * url: http://uva.onlinejudge.org/external/103/10305.html
 * author: Rodrigo Alves
 * status: AC
 */
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, s, n) for (int i = s; i < n; i++)
#define FORI(i, s, n) for (int i = s; i <= n; i++)
#define ZERO 0

typedef vector<int> vi;

int main()
{
	int m, n, i, j, aux, adj;

	while (true) {
		scanf("%d %d", &n, &m);
		if (n == ZERO && m == ZERO) break;

		vi tasks (n + 1, ZERO); // array to store the degrees of the vertices
		vi answer;

		vector<vi> AdjList (n + 1, vi());
		queue<int> q;

		while (m--) {
			scanf("%d %d", &i, &j);

			AdjList[i].push_back(j);
			tasks[j]++;
		}

		FORI (i, 1, n) if (tasks[i] == ZERO) q.push(i);

		while (!q.empty()) {
			aux = q.front();
			q.pop();

			answer.push_back(aux);

			FOR (i, 0, (int) AdjList[aux].size()) {
				adj = AdjList[aux][i];
				tasks[adj]--;
				if (tasks[adj] == ZERO) q.push(adj);
			}
		}

		printf("%d", answer[0]);
		FOR (i, 1, n) printf(" %d", answer[i]);
		printf("\n");
	}

	return 0;
}
