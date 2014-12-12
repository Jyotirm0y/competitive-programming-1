// author: Rodrigo Alves
// problem: Sedex
// url: http://br.spoj.com/problems/JSEDEX
// status: AC
#include <bits/stdc++.h>

int main()
{
	int N, A, L, P; // diameter
	scanf("%d", &N);
	scanf("%d %d %d", &A, &L, &P);

	(N <= A && N <= L && N <= P) ? printf("S\n") : printf("N\n");

	return 0;
}
