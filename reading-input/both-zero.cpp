#include <stdio.h>
#include <iostream>
using namespace std;

// read integers x and y until both are zero!
int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y), (x || y)) {
        cout << x+y << endl;
    }

    return 0;
}
