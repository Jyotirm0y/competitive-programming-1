// author: Rodrigo Alves
// problem: TEX Quotes
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=208
// status: AC
#include <cstdio>

int main()
{
    char c;
    bool first = true;

    while(scanf("%c", &c) != EOF) {
        if (c == '"' && first) {
            printf("%s", "``");
            first = false;
        } else if (c == '"' && !first) {
            printf("%s", "''");
            first = true;
        } else {
            printf("%c", c);
            if (first) {
                first = true;
            } else {
                first = false;
            }
        }
    }

    return 0;
}