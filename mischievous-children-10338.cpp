// author: Rodrigo Alves
// problem: Mischievous Children
// url: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1279
// status: AC
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

long long table[22] = {1, 1};

void fillTable()
{
  for(int i = 2; i <= 20; i++) table[i] = i * table[i-1];
}

int main() {
  int N;
  long long ans;
  fillTable();

  string str;

  scanf("%d", &N);

  for (int c = 1; c <= N; c++) {
    cin >> str;

    int letter[26] = {}, len = str.length();
    for (int i = 0; str[i]; i++) letter[str[i]-'A']++;

    ans = table[len];

    for (int i = 0; i < 26; i++) ans /= table[letter[i]];
    printf("Data set %d: %lld\n", c, ans);
  }

  return 0;
}
