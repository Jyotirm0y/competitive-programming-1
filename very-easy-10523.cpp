// author: Rodrigo Alves
// problem: 10523 - Very Easy !!!
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1464
// status: AC
#include <stdio.h>
#include <math.h>

int main()
{
    int N, A, total;

    while (scanf("%d %d", &N, &A)) {
        total = 0;

        for (int i = 1; i <= N; i++) {
            total += i * pow(A, i);
        }

        printf("%d\n", total);
    }

    return 0;
}