// author: Rodrigo Alves Vieira
// problem: Largest palindrome product
// url: https://projecteuler.net/problem=4
// status: AC
// submitted: August 5th 2020
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

bool is_palindrome(string str) {
    int length = str.length();

    for (int i = 0, j = length - 1; i <= floor(length / 2) && i != j; i++, j--) {
        if (str.at(i) != str.at(j)) {
            return false;
        }
    }

    return true;
}

int main()
{
    int largest = 0, prod;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            prod = i * j;

            if (is_palindrome(to_string(prod))) {
                if (prod > largest) {
                    largest = prod;
                }
            }
        }
    }

    printf("%d\n", largest);

    return 0;
}
