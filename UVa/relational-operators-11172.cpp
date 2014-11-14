// author: Rodrigo Alves
// problem: Relational Operator
// url: vhttp://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113
// type: Ad hoc
// status: AC
#include <cstdio>

int main()
{
    int counter;
    int op1, op2;

    scanf("%d", &counter);
    while(counter--) {
        scanf("%d %d", &op1, &op2);
        if (op2 > op1) {
            printf("<\n");
        } else if (op1 > op2) {
            printf(">\n");
        } else {
            printf("=\n");
        }
    }
    return 0;
}