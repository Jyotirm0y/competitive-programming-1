// author: Rodrigo Alves
// judge: URI
// problem: Salary with Bonus
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1009
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name;
  double fixedSalary, totalSold;

  cin >> name;
  scanf("%lf\n%lf", &fixedSalary, &totalSold);

  printf("%s = R$ %.2lf\n", "TOTAL", fixedSalary + (totalSold * 0.15));

  return 0;
}
