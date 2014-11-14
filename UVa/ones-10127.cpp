// author: Rodrigo Alves
// problem: Ones
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1068
// status: AC
#include <cstdio>
using namespace std;
#define FOR(i, n) for(int i = 0; i < n; i++)

int main()
{
  int n, answer;

  while (scanf("%d", &n) != EOF) {
    int i = 1; answer = 1;

    while (i) {
      i = (i * 10) + 1;
      i = i % n;
      answer++;
    }

    printf("%d\n", answer);
  }

  return 0;
}
