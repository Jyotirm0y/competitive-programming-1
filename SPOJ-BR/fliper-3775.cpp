// author: Rodrigo Alves
// problem: Fliperam
// url: http://br.spoj.com/problems/FLIPERAM
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

int A[5], B[5];

int main()
{
	long N, M;
	long number;
	scanf("%ld %ld", &N, &M);
	vector<long> numbers;

	while (N--) {
		scanf("%ld", &number);
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = numbers.size() - 1; i > numbers.size() - M - 1; i--) {
		printf("%ld\n", numbers[i]);
	}

	return 0;
}
