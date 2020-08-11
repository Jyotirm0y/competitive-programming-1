// author: Rodrigo Alves Vieira
// problem: Highly divisible triangular number
// url: https://projecteuler.net/problem=12
// status: AC
// submitted: August 10th 2020
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

#define INTRINSIC_FACTORS 2
#define PROBLEM_SIZE 100000
#define TARGET 500

int factors(int n) {
    int total = 0;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            total++;
        }
    }

    return total;
}

int main() {
    long long n, fn;

    vector<long long> t_numbers;
    vector<long long> factor_sums;

    t_numbers.push_back(1);
    t_numbers.push_back(3);

    factor_sums.push_back(1);
    factor_sums.push_back(2);

    for (int i = 2; i < PROBLEM_SIZE; i++) {
        n = (i + 1) + t_numbers[i - 1];
        fn = factors(n) + INTRINSIC_FACTORS;

        if (fn > TARGET) {
            printf("%lld %lld\n", n, fn);
            return 0;
        }

        t_numbers.push_back(n);
        factor_sums.push_back(fn);
    }

    return 0;
}
