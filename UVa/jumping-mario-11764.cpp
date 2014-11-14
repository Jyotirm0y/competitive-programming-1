// author: Rodrigo Alves
// problem: Jumping Mario
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864
// status: AC
#include <iostream>
using namespace std;

int main()
{
    int N, C, last = 0, curr, cas = 0, hj = 0, lj = 0;
    cin >> N;

    while(N--) {
        cin >> C;

        while (C--) {
            cin >> curr;

            if (last != 0) {
                if (curr > last) hj++;
                if (last > curr) lj++;
            }

            last = curr;
        }

        cout << "Case " << ++cas << ": " << hj << " " << lj << endl;
        last = curr = hj = lj = 0;
    }

    return 0;
}