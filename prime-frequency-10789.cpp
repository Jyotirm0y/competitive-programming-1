// author: Rodrigo Alves
// problem: Prime Frequency
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1730
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool isprime(int number)
{
  if (number == 0 or number == 1 or (number != 2 && number % 2 == 0)) return false;

  for (long i = 2; i <= sqrt(number); i++) {
    if (number % i == 0 && i != number) return false;
  }

  return true;
}

int main()
{
  int N;
  vector<char> chosen;
  string sequence;
  map<char, int> database;

  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    cin >> sequence;

    for (int j = 0; j < sequence.size(); j++) {
      if (database.count(sequence[j]) == 0) database[sequence[j]] = 1;
      else database[sequence[j]] += 1;
    }

    for (int k = 0; k < sequence.size(); k++) {
      if (isprime(database[sequence[k]])) chosen.push_back(sequence[k]);
    }

    vector<char>::iterator it;
    sort(chosen.begin(), chosen.end());

    it = unique(chosen.begin(), chosen.end());
    chosen.resize(distance(chosen.begin(), it));

    cout << "Case " << i << ": ";

    if (chosen.size() > 0) for (int i = 0; i < chosen.size(); i++) printf("%c", chosen[i]);
    else printf("%s", "empty");
    printf("\n");

    database.clear();
    chosen.clear();
  }
}
