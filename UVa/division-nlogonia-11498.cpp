// author: Rodrigo Alves
// problem: Division of Nlogonia
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2493
// type: Ad hoc
// status: AC
#include <stdio.h>

int main()
{
    int count, N, M, X, Y;
    bool follow = true;

    while(scanf("%d", &count) != 0 && count != 0) {
        scanf("%d %d", &N, &M);
        while(count--) {
            follow = true;
            scanf("%d %d", &X, &Y);
            if (X == N || X == M || Y == N || Y == M) {
                printf("%s\n", "divisa");
                follow = false;
            }

            if (Y > M && follow) {
                if (X > N) {
                    printf("%s\n", "NE");
                } else {
                    printf("%s\n", "NO");
                }
            } else if (follow) {
                if (X > N) {
                    printf("%s\n", "SE");
                } else {
                    printf("%s\n", "SO");
                }
            }
        }
    }

    return 0;
}