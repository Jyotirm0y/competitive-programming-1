// author: Rodrigo Alves Vieira
// problem: Square Numbers
// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
// status: AC
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
  int a, b, root, total;

  while (scanf("%d %d", &a, &b) && a != 0 && b != 0) {
    total = 0;

    for (int i = a; i <= b; i++) {
      root = sqrt(i);

      if (root * root == i) total++;

      //printf("%d - %d %d\n", i, root, root * root == i);
    }

    printf("%d\n", total);
  }


  return 0;
}
