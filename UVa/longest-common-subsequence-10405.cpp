// problem: Longest Common Subsequence
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1346
// status: AC
#include <bits/stdc++.h>
using namespace std;

int LCS[1001][1001];

int main()
{
  int N, M;
  string stringA, stringB;

  while (getline(cin, stringA)) {
    getline(cin, stringB);

    N = stringA.length();
    M = stringB.length();

    for (int i = N; i >= 0; i--) {
      for (int j = M; j >= 0; j--) {

        if (i == N || j == M) {
          LCS[i][j] = 0;
          continue;
        }

        if (stringA[i] == stringB[j]) {
          LCS[i][j] = 1 + LCS[i+1][j+1];
        } else {
          LCS[i][j] = max(LCS[i+1][j], LCS[i][j+1]);
        }
      }
    }

    cout << LCS[0][0] << endl;
  }

  return 0;
}
