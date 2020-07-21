// author: Rodrigo Alves Vieira
// problem: Even Fibonacci Numbers
// url: https://projecteuler.net/problem=2
// status: AC
// submitted: June 25th 2020
#include <cstdio>
#include <vector>
using namespace std;

#define LIMIT 4000000

int main()
{
  long long result = 0;
  vector<long long> table;
  table.push_back(0);
  table.push_back(1);

  for (int i = 2; i < 34; i++) table.push_back(table[i-1] + table[i-2]);

  for (int i = 0; i < 34; i++) {
    if (table[i] % 2 == 0) result += table[i];
  }

  printf("Answer is: %lld\n", result);

  return 0;
}
