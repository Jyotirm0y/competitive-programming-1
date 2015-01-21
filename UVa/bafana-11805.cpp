// author: Rodrigo Alves
// problem: Bafana Bafana
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2905
// status: AC
#include <bits/stdc++.h>

int numbers[30];

int main()
{
    int T, N, K, P, total, cas = 1;
    scanf("%d", &T);

    while (T--) {
        total = 0;
        scanf("%d %d %d", &N, &K, &P);
        for (int i = 1; i <= N; i++) numbers[i-1] = i;

        printf("Case %d: %d\n", cas++, (P+K-1) %N+1);
    }

    return 0;
}
