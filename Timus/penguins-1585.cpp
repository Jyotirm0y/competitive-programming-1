// author: Rodrigo Alves
// problem: Penguins
// url: http://acm.timus.ru/print.aspx?space=1&num=1585
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	string p1, p2;

	int c1 = 0, c2 = 0, c3 = 0;
	vector<int> numbers;

	while (N--) {
		cin >> p1;
		cin >> p2;

		if (p1 == "Emperor") c1++;
		if (p1 == "Little") c2++;
		if (p1 == "Macaroni") c3++;
	}

	if (c1 > c2 && c1 > c3) printf("%s\n", "Emperor Penguin");
	if (c2 > c1 && c2 > c3) printf("%s\n", "Little Penguin");
	if (c3 > c1 && c3 > c2) printf("%s\n", "Macaroni Penguin");

	return 0;
}
