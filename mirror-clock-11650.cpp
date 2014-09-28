// author: Rodrigo Alves
// problem: 11650 Mirror Clock
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2697
// status: AC

#include <cstdio>

int main()
{
  int N, HH, MM, hh, mm;

  scanf("%d", &N);

  while(N--) {
    scanf("%d:%d", &HH, &MM);
    mm = 60 - MM;
    hh = HH;

    if (MM == 0) {
      mm = 0;
      if (HH != 12) hh = 12 - HH;
    } else {
      hh = 11 - HH;
    }

    if (HH == 12 && MM != 0) {
      hh = 11;
    } else if (HH == 11 && MM != 0) {
      hh = 12;
    }

    if (hh < 10 && mm < 10) {
      printf("0%d:0%d\n", hh, mm);
    } else if (hh < 10 && !(mm < 10)) {
      printf("0%d:%d\n", hh, mm);
    } else if (!(hh < 10) && (mm < 10)) {
      printf("%d:0%d\n", hh, mm);
    } else {
      printf("%d:%d\n", hh, mm);
    }
  }

  return 0;
}
