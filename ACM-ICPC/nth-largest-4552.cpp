// author: Rodrigo Alves
// problem: Nth largest value
// url: https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&category=367&page=show_problem&problem=2553
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, counter, number;
  vector<int> numbers;

  scanf("%d", &N);

  while (N--) {
    scanf("%d", &counter);

    for (int i = 0; i < 10; i++) {
      scanf("%d", &number);
      numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    printf("%d %d\n", counter, numbers[7]);
    numbers.clear();
  }

  return 0;
}
