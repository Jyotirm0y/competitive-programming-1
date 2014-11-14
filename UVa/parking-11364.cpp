// author: Rodrigo Alves
// problem: Parking (optimal parking)
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2349
// status: AC
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> col;
    int count, sum = 0;
    scanf("%d", &count);
    int stores, st, i = 0;

    while(count--) {
        scanf("%d", &stores);
        while(stores--) {
            scanf("%d", &st);
            col.push_back(st);
        }

        sort(col.begin(), col.end()); // sorting collection

        for (i = 1; i < col.size(); i++) {
            sum += col[i] - col[i-1];
        }

        printf("%d\n", sum * 2);
        col.clear();
        sum = i = 0;
    }
}