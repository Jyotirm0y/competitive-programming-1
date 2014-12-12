// author: Rodrigo Alves
// judge: URI
// problem: Positive Numbers
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1060
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N = 6, ans = 0;
	double number;

	vector<double> numbers;

	while (N--) {
		scanf("%lf", &number);
		numbers.push_back(number);
	}

	for (int i = 0; i < 6; i++) {
		if (numbers[i] > 0) ans++;
	}

	printf("%d valores positivos\n", ans);

	return 0;
}
