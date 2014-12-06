// author: Rodrigo Alves
// problem: Skew Binary
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=516
// status: AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int total, k, n;
	string number;

	while (getline(cin, number)) {
		k = number.length();
		if (k == 1 && number.at(0) == '0') break;
		total = 0;

		for (int i = 0; i < k; i++) {
			if (number[i] != '0') {
				n = 2;
				if (number[i] == '1') n = 1;
				total += (int) n * (pow(2, k-i) - 1);
			}
		}

		printf("%d\n", total);

	}

	return 0;
}
