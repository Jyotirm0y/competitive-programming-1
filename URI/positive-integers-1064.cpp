// author: Rodrigo Alves
// judge: URI
// problem: Positive Integers
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1064
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
	int N = 6, count = 0;
	double value, total = 0.0;
	vector<double> numbers;

	while (N--) {
		scanf("%lf", &value);
		if (value > 0) {
			count++;
			total += value;
		}
	}

	printf("%d valores positivos\n", count);
	printf("%.1lf\n", total / count);

	return 0;
}
