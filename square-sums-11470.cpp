// author: Rodrigo Alves
// problem: 11470 - Square Sums
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=373&page=show_problem&problem=2465
// status: AC

#include <cstdio>

int matrix[10][10];

int squareSum(int origin, int n, int offset)
{
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    printf(" %d", matrix[origin/2][origin/2]);
    return 0;
  } else {
    int total = 0;

    // horizontal sub-vectors
    for (int i = offset; i < (origin - offset); i++) {
      total += matrix[offset][i];
      total += matrix[origin - offset - 1][i];
    }

    // vertical sub-vectors
    for (int i = offset + 1; i < origin - offset - 1; i++) {
      total += matrix[i][offset];
      total += matrix[i][origin - offset - 1];
    }

    printf(" %d", total);
    return squareSum(origin, n-2, offset + 1);
  }
}

int main()
{
  int N, counter = 1;

  while (scanf("%d", &N), N != 0) {

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        scanf("%d", &matrix[i][j]);
      }
    }

    printf("Case %d:", counter++);
    squareSum(N, N, 0);

    printf("\n");
  }

  return 0;
}
