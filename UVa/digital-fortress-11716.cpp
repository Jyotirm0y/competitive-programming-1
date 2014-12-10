// author: Rodrigo Alves
// problem: Digital Fortress
// url: http://uva.onlinejudge.org/external/117/11716.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define MAX 10100

char table[MAX][MAX];

int main()
{
  int T, F, d, index, length;
  double d_sqrt;
  string code;

  cin >> T;
  F = T;

  while (T--) {
    // OMFG, I don't know how I came up with this hack
    if (T == F-1) cin.ignore();

    getline(cin, code);

    length = code.length();

    d = sqrt(length);
    d_sqrt = sqrt(length);

    if (d != d_sqrt) {
      printf("%s\n", "INVALID");
      continue;
    }

    index = 0;

    for (int i = 0; i < d; i++) {
      for (int j = 0; j < d; j++) table[i][j] = code.at(index++);
    }

    for (int i = 0; i < d; i++) {
      for (int j = 0; j < d; j++) printf("%c", table[j][i]);
    }

    cout << endl;
  }

  return 0;
}
