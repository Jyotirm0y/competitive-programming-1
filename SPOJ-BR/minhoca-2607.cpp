// author: Rodrigo Alves
// problem: Dama
// url: http://br.spoj.com/problems/MINHOCA
// status: AC
#include <bits/stdc++.h>
using namespace std;

int field[110][110];

int main()
{
	int N, M, tempLineSum, tempColumnSum, lineSum, columnSum;
	tempLineSum = tempColumnSum = lineSum = columnSum = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &field[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		tempLineSum = 0;

		for (int j = 0; j < M; j++) {
			tempLineSum += field[i][j];
		}

		if (tempLineSum > lineSum) lineSum = tempLineSum;
	}

	for (int i = 0; i < M; i++) {
		tempColumnSum = 0;

		for (int j = 0; j < N; j++) {
			tempColumnSum += field[j][i];
		}

		if (tempColumnSum > columnSum) columnSum = tempColumnSum;
	}

	if (columnSum > lineSum) {
		printf("%d\n", columnSum);
	} else {
		printf("%d\n", lineSum);
	}

	return 0;
}
