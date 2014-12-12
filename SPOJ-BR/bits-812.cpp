// author: Rodrigo Alves
// problem: Bits Trocados
// url: http://br.spoj.com/problems/BIT
// status: AC
#include <bits/stdc++.h>

int main()
{
	int V, I, J, K, L;

	int counter, fifties, tens, fives, ones;
	fifties = tens = fives = ones = counter = 0;

	while(scanf("%d", &V) && V != 0) {

		while(V > 0) {

			if ((V - 50) >= 0) {
				fifties++;
				V -= 50;
			} else if ((V - 10) >= 0) {
				tens++;
				V -= 10;
			} else if ((V - 5) >= 0) {
				fives++;
				V -= 5;
			} else if ((V - 1) >= 0) {
				ones++;
				V -= 1;
			}
		}

		printf("Teste %d\n", ++counter);
		printf("%d %d %d %d\n", fifties, tens, fives, ones);
		fifties = tens = fives = ones = 0;
	}

	return 0;
}
