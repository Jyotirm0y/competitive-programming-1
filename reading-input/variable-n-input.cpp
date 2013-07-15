#include <iostream>
using namespace std;

// Reads a variable number of inputs per line. Knowing the number of inputs beforehand
int main()
{
    int k, res, v;
    while (cin >> k) {
        res = 0;
        while (k--) {
            cin >> v;
            res += v;
        }
        cout << res << endl;
    }

    return 0;
}
