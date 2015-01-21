// author: Rodrigo Alves
// problem: Automatic Answer
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2542
// type: Ad hoc
// status: AC
#include <bits/stdc++.h>
using namespace std;

ostringstream convert;

int main()
{
    int T, N;
    long long res = 0;

    cin >> T;
    while (T--) {
        convert.str("");
        convert.clear();
        cin >> N;
        res = (((((N *  567) / 9) + 7492) * 235)/ 47) - 498;
        convert << res;
        
        string p = convert.str();
        
        cout << p.at(p.length() - 2) << endl;
        res = 0;
    }

    return 0;
}
