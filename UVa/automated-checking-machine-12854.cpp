// author: Rodrigo Alves
// problem: Automatic Checking Machine
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4719
// type: Ad hoc
// status: AC
#include <bits/stdc++.h>
using namespace std;

int A[5], B[5];

int main()
{
	while (scanf("%d", &A[0]) == 1) {
		bool ok = true;

		for (int i = 1; i < 5; i++) scanf("%d", &A[i]);
		for (int i = 0; i < 5; i++) scanf("%d", &B[i]);

		for (int i = 0; i < 5; i++) {
			if (A[i] == B[i]) {
				ok = false;
				break;
			}
		}

		if (ok) printf("Y\n");
		else printf("N\n");
	}

	return 0;
}
