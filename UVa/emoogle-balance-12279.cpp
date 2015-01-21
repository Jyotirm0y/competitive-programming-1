// author: Rodrigo Alves
// problem: Emoogle Balance
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3431
// status: AC
#include <bits/stdc++.h>

int main()
{
    int N, no, res, treats, cas = 0;

    while(scanf("%d", &N) && N != 0) {
        res = 0; treats = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &no);
            (no == 0) ? treats++ : res++;
        }

        printf("Case %d: %d\n", ++cas, res - treats);
    }

    return 0;
}
