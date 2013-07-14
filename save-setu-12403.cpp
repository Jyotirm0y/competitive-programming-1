// author: Rodrigo Alves
// problem: Save Setu
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3834
// status: WA
#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    string s;
    cin >> n;

    while(n--) {
        cin >> s;
        if(s == "donate") {
            int y;
            cin >> y;
            x += y;
        } else {
            cout<< x <<endl;
        }
    }

    return 0;
}