// author: Rodrigo Alves
// problem: Is this the easiest problem?
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2474
// status: AC
// help http://www.brasilescola.com/matematica/triangulo.htm
#include <stdio.h>

int main()
{
    long int T, a, b, c, cas;

    while(scanf("%ld", &T) == 1) {
        cas = 0;

        for (long int i = 0; i < T; i++) {
            scanf("%ld %ld %ld", &a, &b, &c);

            if ((a+b)<=c || (b+c) <=a || (c+a) <=b) {
                printf("Case %ld: Invalid\n", ++cas);
            } else if (a <=0 || b <= 0 || c <= 0) {
                printf("Case %ld: Invalid\n", ++cas);
            } else if (a == b && b == c) {
                printf("Case %ld: Equilateral\n", ++cas);
            } else if(a == b || b == c || c == a) {
                printf("Case %ld: Isosceles\n", ++cas);
            } else {
                printf("Case %ld: Scalene\n", ++cas);
            }
        }
    }

    return 0;
}