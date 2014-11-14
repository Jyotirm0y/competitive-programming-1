// author: Rodrigo Alves
// problem: Odd Sum
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1724
// status: AC

#include <cstdio>

int main()
{
  int N, a, b, answer, counter = 1;

  scanf("%d", &N);

  while (N--) {
    answer = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
      if (i % 2 != 0) answer += i;

    }

    printf("Case %d: %d\n", counter++, answer);
  }

  return 0;
}
