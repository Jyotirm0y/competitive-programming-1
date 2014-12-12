// author: Rodrigo Alves
// problem: Conversions
// url: http://www.spoj.com/problems/GNY07B/
// status: AC
#include <bits/stdc++.h>
using namespace std;

pair<double, string> convert(double v, string str)
{
	pair<double, string> retorno(0.0, "");

	if (str == "kg") {
		retorno.first = v * 2.2046;
		retorno.second = "lb";
	}

	if (str == "lb") {
		retorno.first = v * 0.4536;
		retorno.second = "kg";
	}

	if (str == "l") {
		retorno.first = v * 0.2642;
		retorno.second = "g";
	}

	if (str == "g") {
		retorno.first = v * 3.7854;
		retorno.second = "l";
	}

	return retorno;
}

int main()
{
	int N;
	double weight;
	pair <double, string> res;
	string str;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%lf", &weight);
		cin >> str;

		res = convert(weight, str);
		printf("%d %.4lf", i, res.first);
		cout << " " << res.second << endl;
	}

	return 0;
}
