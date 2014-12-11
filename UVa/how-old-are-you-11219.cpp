// author: Rodrigo Alves
// problem: How old are you?
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2160
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define MAX_AGE 130

int main()
{
  int N, dayA, monthA, yearA, dayB, monthB, yearB, delta;
  scanf("%d", &N);

  for (int i = 1; i <= N; i++){
    scanf("%d/%d/%d", &dayA, &monthA, &yearA);
    scanf("%d/%d/%d", &dayB, &monthB, &yearB);

    delta = yearA - yearB;

    if (monthA < monthB) {
      delta--;
    } else if (monthA == monthB) {
      if (dayA < dayB) delta--;
    }

    if (delta < 0) printf("Case #%d: Invalid birth date\n", i);
    else if (delta > MAX_AGE) printf("Case #%d: Check birth date\n", i);
    else printf("Case #%d: %d\n", i, delta);
  }

  return 0;
}
