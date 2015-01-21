// author: Rodrigo Alves
// problem: Add All
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1895
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, x, total, minimum;

  while(scanf("%d", &N), N != 0) {
    priority_queue<int, vector<int>, greater<int> > minHeap;

    while (N--) {
      scanf("%d", &x);
      minHeap.push(x);
    }

    total = 0;
    minimum = 0;

    while (minHeap.size() > 1) {
			total = minHeap.top();
			minHeap.pop();
			total += minHeap.top();
			minHeap.pop();

			minimum += total;
      minHeap.push(total);
		}

		printf("%d\n", minimum);
  }

  return 0;
}
