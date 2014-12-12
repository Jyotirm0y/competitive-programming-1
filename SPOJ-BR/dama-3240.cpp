// author: Rodrigo Alves
// problem: Dama
// url: http://br.spoj.com/problems/DAMA
// status: AC
#include <bits/stdc++.h>
using namespace std;

int mod(int n)
{
	if (n < 0) return -n;
	return n;
}

bool diagonal(int X1, int X2, int Y1, int Y2)
{
	if (mod(Y2 - Y1) == mod(X2 - X1)) return true;
	return false;
}

int main()
{
	int X1, Y1, X2, Y2;

	while(scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) && X1 != 0 || Y1 != 0 || X2 != 0 || Y2 != 0) {
		if (X1 == X2 && Y1 == Y2) {
			printf("%d\n", 0);
		} else if (((X1 == X2) || (Y1 == Y2)) || diagonal(X1, X2, Y1, Y2)) {
			printf("%d\n", 1);
		} else {
			printf("%d\n", 2);
		}
	}

	return 0;
}
