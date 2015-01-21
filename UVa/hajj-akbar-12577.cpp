// author: Rodrigo Alves
// problem: Hajj-e-Akbar
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int count = 0;

    while(getline(cin, line) && line != "*") {
        if (line == "Hajj") {
            cout << "Case " << ++count << ": " << "Hajj-e-Akbar" << endl;
        } else {
            cout << "Case " << ++count << ": " << "Hajj-e-Asghar" << endl;
        }
    }

    return 0;
}
