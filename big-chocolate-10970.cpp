// author: Rodrigo Alves
// problem: Big Chocolate
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1911
// status: AC

#include <cstdio>
using namespace std;

int main()
{
    int M, N;

    while (scanf("%d %d", &M, &N) != EOF) {
        printf("%d\n", M * (N-1) + (M-1));
    }

    return 0;
}