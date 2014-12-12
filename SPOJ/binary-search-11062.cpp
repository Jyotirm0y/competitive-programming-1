// author: Rodrigo Alves
// problem: Binary Search
// url: http://www.spoj.com/problems/BSEARCH1
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q, x, number;
  scanf("%d %d", &N, &Q);

  vector<int> collection;
  vector<int>::iterator low;

  for (int i = 0; i < N; i++) {
    scanf("%d", &number);
    collection.push_back(number);
  }

  while (Q--) {
    scanf("%d", &x);

    if (std::binary_search (collection.begin(), collection.end(), x)) {
      low = std::lower_bound (collection.begin(), collection.end(), x);
      printf("%ld\n", low - collection.begin());
    } else {
      printf("%d\n", -1);
    }
  }

  return 0;
}
