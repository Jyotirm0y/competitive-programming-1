// author: Rodrigo Alves
// problem: Distinct powers
// url: http://projecteuler.net/problem=29
// status: WA
#include <cstdio>

int main()
{
    int i = 1, j = 1;
    long long sumSquares = 0, squaresSum = 0;

    for (; i <= 100; i++) {
        sumSquares += i*i;
    }

    for (; j <= 100; j++) {
        squaresSum += j;
    }

    squaresSum *= squaresSum;
    printf("%lld\n", squaresSum - sumSquares);

    return 0;
}
