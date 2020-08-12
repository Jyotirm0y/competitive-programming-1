// author: Rodrigo Alves Vieira
// problem: SMS Typing
// url: https://onlinejudge.org/external/115/11530.pdf
// status: AC
// submitted: August 12th 2020
#include <cstdio>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<char, int> table;
    table['a'] = 1;
    table['b'] = 2;
    table['c'] = 3;
    table['d'] = 1;
    table['e'] = 2;
    table['f'] = 3;
    table['g'] = 1;
    table['h'] = 2;
    table['i'] = 3;
    table['j'] = 1;
    table['k'] = 2;
    table['l'] = 3;
    table['m'] = 1;
    table['n'] = 2;
    table['o'] = 3;
    table['p'] = 1;
    table['q'] = 2;
    table['r'] = 3;
    table['s'] = 4;
    table['t'] = 1;
    table['u'] = 2;
    table['v'] = 3;
    table['w'] = 1;
    table['x'] = 2;
    table['y'] = 3;
    table['z'] = 4;
    table[' '] = 1;

    int T, i, total;
    char l;

    scanf("%d", &T);

    getchar();

    for (i = 1; i <= T; i++) {
        total = 0;

        while (scanf("%c", &l), l != '\n') {
            total += table[l];
        }

        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}
