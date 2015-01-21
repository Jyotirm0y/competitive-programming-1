// author: Rodrigo Alves
// problem: All in All
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=24&problem=1281&mosmsg=Submission+received+with+ID+9231533
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b;
  int index;
  bool is_substr, follow;

  while (cin >> a >> b) {
    index = 0, follow = true, is_substr = false;

    if (a.size() > b.size()) {
      printf("%s\n", "No");
      follow = false;
    } else if (a.compare(b) == 0) {
      printf("%s\n", "Yes");
      follow = false;
    }

    if (follow) {
      // Assume A is not a substring of B
      // Start index of possible subtring at 0
      // Increment index once (if, of course) the first ocurrence of A[index] is found within B
      // In the next iteration of the loop check for the ocurrenc of the next char of A within B and so on
      // In the final iteration of th loop, index should be equal to the length of A, if A is substring of B
      for (int i = 0; i < b.length(); i++) {
        if (b[i] == a[index]) index++;
        if (index == a.length()) is_substr = true;
      }

      if (is_substr) printf("%s\n", "Yes");
      else printf("%s\n", "No");
    }
  }

  return 0;
}
