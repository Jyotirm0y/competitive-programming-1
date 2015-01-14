// author: Rodrigo Alves
// problem: Inscribed Circles and Isosceles Triangles
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=101&page=show_problem&problem=311
// status: AC
#include <bits/stdc++.h>

#define PI acos(-1)
#define ZERO 0.0
#define PRECISION 0.000001
#define EPS DBL_EPSILON

int sgn(double x)
{
  if (fabs(x) < EPS) return 0;
  return (x > ZERO) ? 1 : -1;
}

bool eq(double x, double y)
{
  return sgn(x - y) == 0;
}

double getValue(double B, double H)
{
  return sqrt(4.0 * H * H + B * B) + B;
}

int main()
{
  double B, H, C, r, answer;
  int TC;

  scanf("%d", &TC);

  while (TC--) {
    scanf("%lf %lf", &B, &H);

    answer = ZERO;
    r = (B * H) / getValue(B, H);

    while (r >= PRECISION) {
      answer += r;
      B -= 2.0 * B * r / H;
      H -= 2.0 * r;
      r = (B * H) / getValue(B, H);
    }

    answer *= 2.0 * PI;
    printf("%13.6lf\n", answer);

    if (TC > 0) putchar('\n');
  }

  return 0;
}
