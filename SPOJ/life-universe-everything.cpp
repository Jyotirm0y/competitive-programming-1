// author: Rodrigo Alves
// problem: Life, Universe and Everything
// url: http://www.spoj.com/problems/TEST/
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
	int N;
	bool found = false;

	while (scanf("%d", &N) && !found) {
		if (N != 42) {
			printf("%d\n", N);
		} else {
			found = true;
		}
	}

	return 0;
}
