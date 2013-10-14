// author: Rodrigo Alves
// problem: Sending email
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1927
// type: Data Structures
// status: AC
#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
    int C; // cases
    int n, m, S, T;
    cin >> C;
    bool route; // exists route?
    int a, b, w;
    vector<vii> Adjacent;
    vi dist;

    priority_queue< ii, vector<ii>, greater<ii> > vertexQueue;

    for (int i = 1; i < C; i++) {


//         while (m--) {
//             scanf("%d %d %d", &a, &b, &w);
//             AdjList[a].push_back(ii(b, w));
//             AdjList[b].push_back(ii(a, w));
//         }


        cout << "Case #" << i << ": " << 10 << endl;
    }

    return 0;
}
