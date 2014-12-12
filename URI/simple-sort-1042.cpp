// author: Rodrigo Alves
// Judge: URI
// problem: Simple Sort
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1042
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  vector<int> original;
  vector<int> numbers;

  original.push_back(A);
  numbers.push_back(A);

  original.push_back(B);
  numbers.push_back(B);

  original.push_back(C);
  numbers.push_back(C);

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < 3; i++) printf("%d\n", numbers[i]);

  printf("\n");

  for (int i = 0; i < 3; i++) printf("%d\n", original[i]);

  return 0;
}
