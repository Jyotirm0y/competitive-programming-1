// author: Rodrigo Alves
// judge: URI
// problem: Even, Odd, Positive and Negative
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1066
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n1, n2, n3, n4, n5, even_numbers = 0, positives = 0, zeroes = 0;
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  vector<int> numbers;

  numbers.push_back(n1);
  numbers.push_back(n2);
  numbers.push_back(n3);
  numbers.push_back(n4);
  numbers.push_back(n5);

  for (int i = 0; i < 5; i++) {
    if (numbers[i] % 2 == 0) even_numbers++;
    if (numbers[i] > 0) positives++;
    if (numbers[i] == 0) zeroes++;
  }

  printf("%d %s\n", even_numbers, "valor(es) par(es)");
  printf("%d %s\n", 5 - even_numbers, "valor(es) impar(es)");
  printf("%d %s\n", positives, "valor(es) positivo(s)");
  printf("%d %s\n", 5 - positives - zeroes, "valor(es) negativo(s)");

  return 0;
}
