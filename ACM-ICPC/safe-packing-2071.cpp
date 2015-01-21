// author: Rodrigo Alves
// problem: Safe Packing
// url: https://icpcarchive.ecs.baylor.edu/external/20/2071.pdf
// status: AC
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
  int W, F, S, size, answer;
  long long number;
  vi sizes;

  int j = 100000000;

  map<long long, long long> dict;
  vector<long long> table;
  table.push_back(0);
  table.push_back(1);

  for (int i = 2; i < 34; i++) {
    number = table[i-1] + table[i-2];
    dict[number] = number;
    table.push_back(number);
  }

  while (scanf("%d %d %d", &W, &F, &S)) {
    if (W == 0 && F == 0 && S == 0) break;

    answer = 0;

    while (W--) {
      scanf("%d", &size);
      sizes.push_back(size);
    }



    sizes.clear();
  }

  return 0;
}
