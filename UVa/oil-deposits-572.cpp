// author: Rodrigo Alves
// problem: Oil Deposits
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=513
// status: AC
#include <bits/stdc++.h>
using namespace std;

char grid[110][110];
int m, n, total;

void floodFill(int x, int y)
{
  if (grid[y][x] != '@') return;
  grid[y][x] = '*';

  if (x > 0) floodFill(x-1, y); //left
  if (x > 0 && y > 0) floodFill(x-1, y-1);  // upper left diagonal
  if (x < n && y > 0 ) floodFill(x-1, y+1); // upper right diagonal
  if (x > 0 && y < m) floodFill(x+1, y-1);  // lower left diagonal
  if (x < n && y  < m) floodFill(x+1, y+1); // lower right diagonal
  if (y > 0) floodFill(x, y-1); //up
  if (x < n) floodFill(x+1, y); //right
  if (y < m) floodFill(x, y+1); // down
}

int main()
{
  while (scanf("%d %d", &m, &n) && m != 0) {
    total = 0;
    for (int i = 0; i < m; i++) scanf(" %s", grid[i]);

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '@') {
          floodFill(j, i);
          total++;
        }
      }
    }

    printf("%d\n", total);
  }

  return 0;
}
