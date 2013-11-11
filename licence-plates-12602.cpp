// author: Rodrigo Alves
// problem: Nice Licence Plates
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4280
// status: AC
#include <stdio.h>

int abs(int n)
{
    if (n < 0) return -n;
    return n;
}

int get_value(char part[]) {
    return 26 * 26 * (part[0] - 'A') + 26 * (part[1] - 'A') + (part[2] - 'A');
}

int main() {
    char LLL[4];
    int N, D;

    scanf("%d", &N);

    while (N--) {
        scanf("%3s-%d", LLL, &D);

        if (abs(get_value(LLL) - D) <= 100) {
            printf("nice\n");
        } else {
            printf("not nice\n");
        }
    }

    return 0;
}