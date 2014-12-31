/**
 * problem: Ordering Tasks
 * url: http://uva.onlinejudge.org/external/103/10305.html
 * author: Rodrigo Alves
 * status: AC
 */
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
	int m, n, i, j;

	while (scanf("%d %d", &m, &n), m != 0 && n != 0) {
		vi tasks;

		for (int i = 1; i <= n; i++) tasks.push_back(i);

		while (m--) {
			scanf("%d %d", &i, &j);
		}
	}

	return 0;
}