// author: Rodrigo Alves
// problem: Soma
// url: http://br.spoj.com/problems/SOMA
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, x, sum = 0;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &x);
		sum += x;
	}

	printf("%d\n", sum);


	return 0;
}
