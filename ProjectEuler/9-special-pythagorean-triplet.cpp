// author: Rodrigo Alves Vieira
// problem: Special Pythagorean triplet
// url: https://projecteuler.net/problem=9
// status: AC
// submitted: August 5th 2020
#include <cstdio>
using namespace std;

#define LIMIT 426

int main()
{
    for (int a = 1; a < LIMIT; a++) {
        for (int b = 1; b < LIMIT; b++) {
            for (int c = 1; c < LIMIT; c++) {
                
                if (a < b && b < c) {
                    if (a*a + b*b == c*c && a + b + c == 1000) {
                        printf("triplet => a == %d b == %d c == %d\n", a, b, c);
                        printf("product => %d\n", a * b * c);
                    }
                }
            }
        }
    }
    
    return 0;
}
