// author: Rodrigo Alves
// problem: Minesweeper
// url: https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2605
// status: AC
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
using namespace std;

char matrix[110][110];

bool valid(int R, int C, int i, int j)
{
	if (i >= 0 && i < R && j >= 0 && j < C) return true;
	return false;
}

int main()
{
	int R, C;
	while (scanf("%d %d", &R, &C), R != 0 && C != 0) {
		for (int i = 0; i < R; i++) {
			scanf("%s", matrix[i]);
		}

		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (matrix[i][j] == '*') continue;

				int total = 0;

				if (valid(R, C, i-1, j-1) && matrix[i-1][j-1] == '*') total++;
				if (valid(R, C, i-1, j) && matrix[i-1][j] == '*') total++;
				if (valid(R, C, i-1, j+1) && matrix[i-1][j+1] == '*') total++;
				if (valid(R, C, i, j-1) && matrix[i][j-1] == '*') total++;
				if (valid(R, C, i, j+1) && matrix[i][j+1] == '*') total++;
				if (valid(R, C, i+1, j-1) && matrix[i+1][j-1] == '*') total++;
				if (valid(R, C, i+1, j) && matrix[i+1][j] == '*') total++;
				if (valid(R, C, i+1, j+1) && matrix[i+1][j+1] == '*') total++;

				matrix[i][j] = total + '0';
			}
		}

		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) printf("%c", matrix[i][j]);
			printf("\n");
		}

	}

	return 0;
}
