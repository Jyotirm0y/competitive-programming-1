// author: Rodrigo Alves
// problem: Par ou Ímpar
// url: http://br.spoj.com/problems/PAR/
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, a, b, counter = 1;
	string playerA, playerB;

	while (scanf("%d", &N), N != 0) {
		printf("Teste %d\n", counter++);
		cin >> playerA;
		cin >> playerB;

		for (int i = 0; i < N; i++) {
			scanf("%d %d", &a, &b);

			if ((a + b) % 2 == 0) cout << playerA << endl;
			else cout << playerB << endl;
		}

		printf("\n");
	}

	return 0;
}
