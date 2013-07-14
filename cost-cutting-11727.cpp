// author: Rodrigo Alves
// problem: Cost Cutting
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827
// status: AC
#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> salaries;
    int counter, s1, s2, s3, fix;

    scanf("%d", &counter);
    fix = counter;
    while(counter--) {
        scanf("%d %d %d", &s1, &s2, &s3);
        salaries.push_back(s1);
        salaries.push_back(s2);
        salaries.push_back(s3);

        sort(salaries.begin(), salaries.end());
        printf("Case %d: %d\n", fix-counter, salaries[1]);
        salaries.clear();
    }
    return 0;
}