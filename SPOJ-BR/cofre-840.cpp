// author: Rodrigo Alves
// problem: Cofre
// url: http://br.spoj.com/problems/COFRE
// status: AC
#include <bits/stdc++.h>

int main()
{
	int K, N, J, Z;
	int i = 1, tempJ = 0, tempZ = 0, count = 1;
	
	while (scanf("%d", &K) > 0 && K != 0) {
		i = 1;

		printf("Teste %d\n", count++);

		for (; i <= K; i++) {
			scanf("%d %d", &J, &Z);
			tempJ += J;
			tempZ += Z;

			printf("%d\n", tempJ - tempZ);
		}

		tempJ = tempZ = 0;
	}

	return 0;
}
