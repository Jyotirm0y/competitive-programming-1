// author: Rodrigo Alves
// problem: Horror Dash
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899
// status: AC
#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
    int C, ref, n, i;
    scanf("%d", &C);
    ref = C;
    std::vector<int> creatures;

    while(C--) {
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &i);
            creatures.push_back(i);
        }

        sort(creatures.begin(), creatures.end());
        printf("Case %d: %d\n", ref - C, creatures[creatures.size() -1]);
        creatures.clear();
    }

    return 0;
}