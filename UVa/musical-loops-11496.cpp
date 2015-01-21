// author: Rodrigo Alves
// problem: Musical Loops
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2491
// type: Ad hoc
// status: AC
#include <bits/stdc++.h>
using namespace std;

int points[10100];

int main()
{
        int N, Hi, peaks;

        while(scanf("%d", &N) && N != 0) {
            peaks = 0;

            for (int i = 0; i < N; i++) {
                scanf("%d", &Hi);
                points[i] = Hi;
            }

            points[N] = points[0];
            points[N+1] = points[1];

            if (N == 2) {
                peaks = 2;
            } else {
                for (int i = 1; i <= N; i++) {
                    if (points[i] < points[i-1] && points[i] < points[i+1]) peaks++;
                    if (points[i] > points[i-1] && points[i] > points[i+1]) peaks++;
                }
            }

            printf("%d\n", peaks);
        }

        return 0;
}
