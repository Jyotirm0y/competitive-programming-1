// author: Rodrigo Alves
// problem: Zapping
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912
// status: AC

#define min(a, b) (a > b ? b : a)
#include <stdio.h>

int main()
{
    int A, B, helper;

    while (scanf("%d %d", &A, &B) && (A != -1 || B != -1)) {
      if (A > B) {
        helper = A;
        A = B;
        B = helper;
      }

      printf ("%d\n", min(B - A, A + 100 - B));
    }

    return 0;
}
