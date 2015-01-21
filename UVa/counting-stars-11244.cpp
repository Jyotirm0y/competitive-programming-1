// author: Rodrigo Alves
// problem: Counting Stars
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2201
// status: AC
#include <bits/stdc++.h>

int main()
{
    int r = 0, c = 0, starsCount;
    bool follow;
    char matrix[110][110];

    while(scanf("%d %d", &r, &c), (r != 0 || c != 0)) {
        starsCount = 0;
        for (int i = 0; i < r; i++) scanf(" %s", matrix[i]);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                follow = false;

                if (matrix[i][j] == '*') {

                    if (matrix[i-1][j] != '*' || i == 0) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i+1][j] != '*' || i == r-1) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i][j-1] != '*' || j == 0) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i][j+1] != '*' || j == c-1) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i-1][j-1] != '*' || i == 0 || j == 0) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i-1][j+1] != '*' || i == 0 || j == c-1) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i+1][j-1] != '*' || i == r-1 || j == 0) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if ((matrix[i+1][j+1] != '*' || i == r-1 || j == c-1) && follow) {
                        follow = true;
                    } else {
                        follow = false;
                    }

                    if (follow) starsCount++;
                }
            }
        }

        printf("%d\n", starsCount);
    }

    return 0;
}
