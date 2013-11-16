// author: Rodrigo Alves
// problem: Feynman
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3301
// status: AC

#include <stdio.h>

int feyman(int n)
{
    if (n == 1) return 1;
	return n*n + feyman(n-1);
}

int main()
{
	int N;
	while (scanf("%d", &N), N != 0) {
		printf("%d\n", feyman(N));
	}

	return 0;
}
