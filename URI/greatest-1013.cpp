// author: Rodrigo Alves
// judge: URI
// problem: The Greatest
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1013
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  vector<int> numbers;

  scanf("%d %d %d", &a, &b, &c);
  numbers.push_back(a);
  numbers.push_back(b);
  numbers.push_back(c);

  sort(numbers.begin(), numbers.end());

  printf("%d %s\n", numbers[2], "eh o maior");

  return 0;
}
