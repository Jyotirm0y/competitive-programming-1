// author: Rodrigo Alves
// problem: Meteoros
// url: http://br.spoj.com/problems/METEORO
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int X1, Y1, X2, Y2, N, X, Y, sum, counter = 0;

	while(scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) && X1 != 0 && Y1 != 0 && X2 != 0 && Y2 != 0) {
		sum = 0;
		scanf("%d", &N);

		while (N--) {
			scanf("%d %d", &X, &Y);
			if (X <= X2 && X >= X1 && Y <= Y1 && Y >= Y2) sum++;
		}

		printf("Teste %d\n", ++counter);
		printf("%d\n", sum);
	}

	return 0;
}
