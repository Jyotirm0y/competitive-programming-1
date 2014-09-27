/*

5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3

7 4 2
3 2 4
3 4 5

2

*/

#include "stdio.h"
#include <vector>
using namespace std;

int matrix[10][10];

int squareSum(int n)
{
  if (n == 0) return 0;
  if (n == 1) {
    return matrix[0][0];
  } else {
    int total = 0;

    // horizontal sub-vectors
    for (int i = 1; i < (n - 1); i++) {
      total += matrix[0][i];
      total += matrix[n-1][i];
    }

    // vertical sub-vectors
    for (int i = 0; i < n; i++) {
      total += matrix[i][0];
      total += matrix[i][n-1];
    }

    printf("%d", total);
    return squareSum(n-1);
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

    printf("Caso %d:", counter++);
    squareSum(N);

    printf("\n");
  }

  return 0;
}
