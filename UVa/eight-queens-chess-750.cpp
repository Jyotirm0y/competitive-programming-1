// author: Rodrigo Alves
// problem: 8 Queens Chess Problem
// url: http://uva.onlinejudge.org/external/7/750.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int N, a, b, lineCounter;
vi row;

bool place(int r, int c) {
  for (int prev = 0; prev < c; prev++) { // check previously placed queens
    if (row[prev] == r || ((int) abs(row[prev] - r) == (int) abs(prev - c))) {
      return false; // if share same row or same diagonal -> infeasible
    }
  }
  
  return true;
}

void backtrack(int c) {
  if (c == 8 && row[b] == a) {         // candidate sol, (a, b) has 1 queen
    printf("%2d      %d", ++lineCounter, row[0] + 1);
    for (int j = 1; j < 8; j++) printf(" %d", row[j] + 1);
    printf("\n");
  }

  for (int r = 0; r < 8; r++) {
    // if can place a queen at this col and row put this queen here and recurse
    if (place(r, c)) {
      row[c] = r; backtrack(c + 1);
    }
  }
}

int main() {
  scanf("%d", &N);
  
  while (N--) {
    scanf("%d %d", &a, &b);
    a--; b--;
    lineCounter = 0;

    row = vi (8, 0);
    
    printf("SOLN       COLUMN\n");
    printf(" #      1 2 3 4 5 6 7 8\n\n");
    
    backtrack(0);
    if (N) printf("\n");
  }

  return 0;
}
