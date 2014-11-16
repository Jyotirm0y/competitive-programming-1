// author: Rodrigo Alves
// problem: Cookies Piles
// url: http://www.spoj.com/problems/AMR10F
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

int main()
{
	int T, N, A, D, total;
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d %d", &N, &A, &D);
		total = 0;

		for (int i = 0; i < N; i++) {
			total += A + (D * i);
		}

		printf("%d\n", total);
	}

	return 0;
}
