// author: Rodrigo Alves
// problem: Lost in Localization
// url: http://acm.timus.ru/print.aspx?space=1&num=1785
// status: AC
#include <bits/stdc++.h>
using namespace std;

string answer(int n)
{
	string str = "";
	if (n >= 1 && n <= 4) str = "few";
	else if (n >= 5 && n <= 9) str = "several";
	else if (n >= 10 && n <= 19) str = "pack";
	else if (n >= 20 && n <= 49) str = "lots";
	else if (n >= 50 && n <= 99) str = "horde";
	else if (n >= 100 && n <= 249) str = "throng";
	else if (n >= 250 && n <= 499) str = "swarm";
	else if (n >= 500 && n <= 999) str = "zounds";
	else str = "legion";

	return str;
}

int main()
{
	int n;
	scanf("%d", &n);

	cout << answer(n) << endl;

	return 0;
}
