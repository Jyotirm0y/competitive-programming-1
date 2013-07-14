// author: Rodrigo Alves
// problem: Packing for Holiday
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3794
// status: AC
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counter, ref, L, W, H;
    scanf("%d", &counter);
    ref = counter;
    std:string veredict;

    while(counter--) {
        scanf("%d %d %d", &L, &W, &H);
        if (L <= 20 && W <= 20 && H <= 20) {
            veredict = "good";
        } else {
            veredict = "bad";
        }
        cout << "Case " << ref - counter << ": " << veredict << endl;
    }

    return 0;
}