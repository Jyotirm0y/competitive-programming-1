// author: Rodrigo Alves
// problem: F91
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1637
// type: Ad hoc
// status: accepted

#include <stdio.h>

int main() {
    int n, res;
    while (scanf("%d", &n)==1 && n) {
        n <= 100 ? (res = 91) : (res = n-10);
        printf("f91(%d) = %d\n", n, res);
    }
    return 0;
}