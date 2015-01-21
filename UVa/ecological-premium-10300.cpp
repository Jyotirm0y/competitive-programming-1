// author: Rodrigo Alves
// problem: Ecological Premium
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241
// status: AC
#include <bits/stdc++.h>

int main()
{
    int N, F, a = 0, b = 0, c = 0, total;
    scanf("%d", &N);

    while(N--) {
        total = 0;
        scanf("%d", &F);
        while(F--) {
            scanf("%d %d %d", &a, &b, &c);
            total += a * c;
        }
        printf("%d\n", total);
    }

    return 0;
}
