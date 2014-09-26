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

int squareSum(int n, int offset)
{
  if (n == 0) return 0;
  if (n == 1) return matrix[0][0];

  int total = 0;

  // horizontal sub-vectors
  for (int i = (offset); i <= (n - offset - 1); i++) {
    total += matrix[offset - 1][i];
    total += matrix[n-1][i];

    // printf("%d", matrix[offset - 1][i]);
    // printf("%d", matrix[n - 1][i]);

    printf("matrix[%d][%d]\n", offset - 1, i);
    printf("matrix[%d][%d]\n", n - 1, i);
  }

  // vertical sub-vectors
  for (int i = offset - 1; i <= (n - offset); i++) {
    total += matrix[i][offset - 1];
    total += matrix[i][n-1];

    // printf("%d", matrix[i][offset - 1]);
    // printf("%d", matrix[i][n-1]);


  }

  return total;
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

    int offset = 1;

    printf("Caso %d:", counter++);

    squareSum(N, offset);
    printf("\n" );
    squareSum(N - 1, offset + 1);

    //
    // while (N > 0) {
    //   // squareSum(n, offset);
    //   // printf(" %d", squareSum(N, offset));
    //   offset++;
    //
    //   N = N-2;
    // }

    printf("\n");
  }

  return 0;
}
