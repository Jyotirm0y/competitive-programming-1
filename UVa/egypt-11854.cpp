/**
author: Rodrigo Alves
problem: Egypt
url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2954
**/
#include <bits/stdc++.h>

int main()
{
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c), (a != 0 || b != 0 || c != 0)) {
        if (a * a == b*b + c*c ||
            b * b == a*a + c*c ||
            c * c == a*a + b*b
            ) {
            printf("%s\n", "right");
        } else {
            printf("%s\n", "wrong");
        }
    }

    return 0;
}
