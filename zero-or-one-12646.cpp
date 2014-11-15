// author: Rodrigo Alves
// problem: Zero or One
// url: http://uva.onlinejudge.org/external/126/12646.pdf
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
	int a, b, c;

	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a == 0 && b == 0 && c == 0) printf("*\n");
		else if (a == 0 && b == 0 && c == 1) printf("C\n");
		else if (a == 0 && b == 1 && c == 0) printf("B\n");
		else if (a == 0 && b == 1 && c == 1) printf("A\n");
		else if (a == 1 && b == 1 && c == 1) printf("*\n");
		else if (a == 1 && b == 1 && c == 0) printf("C\n");
		else if (a == 1 && b == 0 && c == 1) printf("B\n");
    else printf("A\n");
	}

	return 0;
}
