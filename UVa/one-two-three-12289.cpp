// author: Rodrigo Alves
// problem: One-Two-Three
// url: http://uva.onlinejudge.org/external/122/12289.html
// status: AC
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main ()
{
  int N, value;
  string word;
  scanf("%d", &N);

  while (N--) {
    cin >> word;

    if (word.length() == 5) {
      printf("3\n");
    } else {
      value = 0;

      if (word[0] == 'o' ) value++;
      if (word[1] == 'n' ) value++;
      if (word[2] == 'e' ) value++;

      if (value >= 2) printf("1\n");
      else printf("2\n");
    }
  }

  return 0;
}
