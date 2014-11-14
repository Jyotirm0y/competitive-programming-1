// author: Rodrigo Alves
// problem: A Change in Thermal Unit
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3135
// status: AC

#include <stdio.h>

int main()
{
    int T;
    double initC, initF, variation;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%lf %lf", &initC, &initF);

        variation = 9 * initC / 5 + initF;

        printf("Case %d: %.2lf\n", i, variation * 5 / 9);

    }

    return 0;
}