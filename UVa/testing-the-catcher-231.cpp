#include <bits/stdc++.h>
using namespace std;

#define FIRST -50
#define STOP -1
#define MAX_N 100000

typedef vector<int> vi;

int main()
{
  int weight, input_counter = 0, counter = 1, lis = 0, lis_end = 0, first_value = FIRST, pos, i;
  int L[MAX_N], L_id[MAX_N], P[MAX_N], A[MAX_N];

  while (true) {
    scanf("%d", &weight);
    if (first_value == FIRST) first_value = weight;

    if (weight == STOP && first_value == STOP) break;

    if (weight == STOP) {
      printf("Test #%d:\n", counter++);
      printf("  maximum possible interceptions: %d\n\n", lis);

      printf("%d\n", input_counter);
      i = input_counter - 1;
      pos = lower_bound(L, L + lis, A[i]) - L;

      L[pos] = A[i];
      L_id[pos] = i;
      P[i] = pos ? L_id[pos - 1] : -1;

      if (pos + 1 > lis) {
        lis = pos + 1;
        lis_end = i;
      }

      // Clearing values for next instance!
      first_value = FIRST;
      lis = 0, lis_end = 0, input_counter = 0;
      continue;
    }

    A[input_counter++] = weight;
  }

  return 0;
}
