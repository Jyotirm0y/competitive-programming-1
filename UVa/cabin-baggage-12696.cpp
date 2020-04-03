// author: Rodrigo Alves Vieira
// problem: Cabin Baggage
// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4434
// status: AC
#include <cstdio>

int main() {
  int t, allowed = 0;
  double length, width, depth, weight, perimeter;

  scanf("%d", &t);

  while (t) {
    scanf("%lf %lf %lf %lf", &length, &width, &depth, &weight);
    perimeter = length + width + depth;

    if (((length <= 56.0 && width <= 45.0 && depth <= 25.00) || perimeter <= 125.00) && weight <= 7.00) {
      printf("1\n");
      allowed++;
    } else {
      printf("0\n");
    }

    t--;
  }

  printf("%d\n", allowed);

  return 0;
}
