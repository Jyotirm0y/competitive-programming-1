// author: Rodrigo Alves
// problem: Age Sort
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=2457&mosmsg=Submission+received+with+ID+12609741
// status: AC
#include <stdio.h>
#include <algorithm>
using namespace std;

int array[2010000];

int main()
{
    int N, x;

    while (scanf("%d", &N), N != 0) {
        for (int i = 0; i < N; i++) {
            scanf("%d", &array[i]);
        }

        sort(array, array + N);

        for (int i = 0; i < N; i++) {
            if (i == N-1) printf("%d", array[i]);
            else printf("%d ", array[i]);
        }

        printf("\n");
    }

    return 0;
}
