#include <stdio.h>

// Numbering input oces sequentially. VERY USEFUL
// Print blank lines between test oces. A trailing newline will be shown too
int a, b, oc = 0;

int main()
{
    while(scanf("%d %d", &a, &b) != EOF) {
        if (oc > 1) printf("\n");
        printf("oce %d: %d\n\n", ++oc, a+b);
    }

    return 0;
}
