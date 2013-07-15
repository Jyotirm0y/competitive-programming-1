#include <iostream>
using namespace std;

int N, a, b;

// Read the number of test cases N and runs something until the N equals 0
int main()
{
    cin >> N;
    while(N--) {
        cin >> a; cin >> b;
        cout << a + b << endl;
    }

    return 0;
}
