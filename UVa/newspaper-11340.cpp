// author: Rodrigo Alves
// problem: Newspaper
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2315
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K, M, value, answer = 0;
	char letter;
	string article;
	vector<string> articles;
	map<char, int> table;

	scanf("%d", &N);

	while (N--) {
		scanf("%d", &K);

		while (K--) {
			cin >> letter;
			cin >> value;

			table[letter] = value;
		}

		scanf("%d", &M);
		cin.ignore();

		while (M--) {
			getline(cin, article);
			articles.push_back(article);
		}

		answer = 0;

		for (int i = 0; i < articles.size(); i++) {
			for (int j = 0; j < articles[i].length(); j++) {
				answer += table[articles[i][j]];
			}
		}

		printf("%.2lf$\n", double(answer)/100);

		table.clear();
		articles.clear();
	}

	return 0;
}
