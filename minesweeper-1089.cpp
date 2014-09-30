// author: Rodrigo Alves
// problem: Minesweeper
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1130
// status: WA
#include <cstdio>

char matrix[102][102];

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int N, M, counter = 1, inst = 0;

  while (scanf("%d %d", &N, &M), N != 0 && M != 0) {
    int answer[102][102] = {0};

    for (int i = 0; i < N; i++) scanf(" %s", matrix[i]);
    if (inst == 1) printf("\n");
    inst = 1;

    printf("%s #%d:\n", "Field", counter++);

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (matrix[i][j] == '*') {
          answer[i-1][j-1] += 1;
          answer[i-1][j] += 1;
          answer[i-1][j+1] += 1;

          answer[i][j-1] += 1;
          answer[i][j+1] += 1;

          answer[i+1][j-1] += 1;
          answer[i+1][j] += 1;
          answer[i+1][j+1] += 1;
        }
      }
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++){
        if (matrix[i][j] == '*') {
          printf("%c", '*');
        } else {
          printf("%d", answer[i][j]);
        }
      }
      printf("\n");
    }
  }

  return 0;
}
