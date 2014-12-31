/**
 * problem: Power of Matrix
 * url: http://www.spoj.com/problems/MPOW/
 * author: Rodrigo Alves
 * status: WA
 */
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)

int matrix[51][51];

int main()
{
	int T, M, N;

	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &M, &N);
		
		FOR (i, M) {
			FOR (j, M) {
				scanf("%d", &matrix[i][j]);
			}
		}
	}

	return 0;
}