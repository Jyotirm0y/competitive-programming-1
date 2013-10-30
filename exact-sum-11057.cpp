// author: Rodrigo Alves
// problem: Exact Sum (2-sum)
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1998
// status: AC

#include <stdio.h>
#include <algorithm>
using namespace std;

int array[10050];

int main()
{
    int N, M, a, b, total;

    while (scanf("%d", &N) != EOF) {
        a = b = total = 0;

        for (int i = 0; i < N; i++) scanf(" %d", &array[i]);

        scanf("%d", &M);
        sort(array, array + N);

        for (int first = 0, last = N - 1; first < last;) {
            total = array[first] + array[last];

            if (total == M) {
                a = first++, b = last--;
            } else if (total < M) {
                ++first;
            } else {
                --last;
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", array[a], array[b]);
    }

    return 0;
}