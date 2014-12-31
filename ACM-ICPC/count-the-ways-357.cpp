/**
 * problem: Let Me Count the Ways
 * url: http://uva.onlinejudge.org/external/3/357.html
 * author: Rodrigo Alves
 * status: AC
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> coins = { 1, 5, 10, 25, 50 };
	vector<long long> dp (30005, 0);

	int N, coin;
	dp[0] = 1;

	for (int i = 0; i < 5; i++) {
		coin = coins[i];

		for (int j = coin; j < 30005; j++) dp[j] += dp[j - coin];
  }
	
	while (scanf("%d", &N) != EOF) {

		if (dp[N] == 1) printf("There is only 1 way to produce %d cents change.\n", N);
		else printf("There are %lld ways to produce %d cents change.\n", dp[N], N);
	}

	return 0;
}