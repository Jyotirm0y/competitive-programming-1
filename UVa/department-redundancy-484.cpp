// author: Rodrigo Alves
// problem: The Department of Redundancy Department
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=425
// status: AC
#include <bits/stdc++.h>
using namespace std;

vector<int> order;
map<int, int> pairs;

int main()
{
  int N;

  while (scanf("%d", &N) != EOF) {
    if (pairs.count(N) == 0) {
      pairs[N] = 1;
      order.push_back(N);
    } else {
      pairs[N] = pairs[N] + 1;
    }
  }

  for(int i = 0; i < (int) order.size(); i++) printf("%d %d\n", order[i], pairs[order[i]]);

  return 0;
}
