// author: Rodrigo Alves
// judge: URI
// problem: Month
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1052
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	vector<string> words;
	words.push_back("January");
	words.push_back("February");
	words.push_back("March");
	words.push_back("April");
	words.push_back("May");
	words.push_back("June");
	words.push_back("July");
	words.push_back("August");
	words.push_back("September");
	words.push_back("October");
	words.push_back("November");
	words.push_back("December");

	cout << words[N-1] << endl;

	return 0;
}
