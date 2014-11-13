// author: Rodrigo Alves
// problem: Sum square difference
// url: http://projecteuler.net/problem=6

#include <cstdio>

int main()
{
    int i = 1, j = 1;
    long long sumSquares, squaresSum;

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