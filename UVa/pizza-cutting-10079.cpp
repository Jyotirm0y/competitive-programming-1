// author: Rodrigo Alves
// problem: Pizza Cutting
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1020
// status: AC
#include <stdio.h>

int main()
{
    long long N, ans;

    while (scanf("%lld", &N), N >= 0) {
        printf("%lld\n", N * (N+1)/2 + 1);
    }

    return 0;
}