// author: Rodrigo Alves
// problem: Maximum Sum
// url: http://uva.onlinejudge.org/external/1/108.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)

int main()
{
  int N, answer, subRect;
  int matrix[101][101];

  scanf("%d", &N);

  FOR (i, N) FOR (j, N) {
    	scanf("%d", &matrix[i][j]);
  		if (j > 0) matrix[i][j] += matrix[i][j - 1];
  }

  FOR (i, N) {
  	for (int r = i; r < N; r++) {
  		subRect = 0;

  		FOR (row, N) {
  			if (i > 0) subRect += matrix[row][r] - matrix[row][i - 1];
      	else subRect += matrix[row][r];

      	if (subRect < 0) subRect = 0;
      	answer = max(answer, subRect);
  		}
  	}
  }

  printf("%d\n", answer);
  return 0;
}
