/*
author: Rodrigo Alves
problem: F3n+1 (recursive solution)
url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
type: Ad hoc
status: accepted
*/
#include <stdio.h>

int result = 0;

int f3n(int n)
{
    result++;
    if (n==1) return 0;

    if (n % 2 != 0) {
        f3n((3*n)+1);
    } else {
        f3n(n/2);
    }
}

int main()
{
    int cycleLength = 0, i, j, helper, helperJ, localResult = 0;

    while(scanf("%d %d", &i, &j) != -1) {
        if (i <= j) {
            helper = i;
            helperJ = j;
        } else {
            helper = j;
            helperJ = i;
        }

        for (; helper <= helperJ; helper++) {
            f3n(helper);

            if (result >= localResult) {
                localResult = result;
            }

            result = 0;
        }

        printf("%d %d %d\n", i, j, localResult);
        localResult = 0;
    }

    return 0;
}