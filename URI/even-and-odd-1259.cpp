// author: Rodrigo Alves
// judge: URI
// problem: Even and Odd
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1074
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  long N, number;
  scanf("%ld", &N);

  vector<long> even_numbers;
  vector<long> odd_numbers;

  while (N--) {
    scanf("%ld", &number);
    if (number % 2 == 0) even_numbers.push_back(number);
    else odd_numbers.push_back(number);
  }

  sort(even_numbers.begin(), even_numbers.end());
  sort(odd_numbers.begin(), odd_numbers.end());

  for (int i = 0; i < even_numbers.size(); i++) printf("%ld\n", even_numbers[i]);
  for (int i = odd_numbers.size() - 1; i >= 0; i--) printf("%ld\n", odd_numbers[i]);

  return 0;
}
