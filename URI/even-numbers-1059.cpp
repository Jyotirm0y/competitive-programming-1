// author: Rodrigo Alves
// judge: URI
// problem: Even Numbers
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1059
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) printf("%d\n", i);
	}

	return 0;
}
