// author: Rodrigo Alves
// problem: Lumberjack sequencing
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3093
// status: AC
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int array[11];
string answer;

int main()
{
    int N;

    scanf("%d", &N);
    printf("Lumberjacks:\n");

    while (N--) {
        answer = "Ordered";

        for (int i = 0; i < 10; i++) scanf("%d", &array[i]);

        // supoe que o array esta ordenado do menor pro maior, prove o contrario
        if (array[0] < array[9]) {

            for (int i = 0; i < 9; i++) {
                if (array[i] > array[i+1]) {
                    answer = "Unordered";
                }
            }
        }

        // supoe que o array esta ordenado do maior pro menor, prove o contrario
        if (array[0] > array[9]) {

            for (int i = 0; i < 9; i++) {
                if (array[i] < array[i+1]) {
                    answer = "Unordered";
                }
            }
        }

        if (array[0] == array[9]) {
            for (int i = 0; i < 9; i++) {
                if (array[i] != array[0]) {
                    answer = "Unordered";
                }
            }
        }

        cout << answer << endl;
    }


    return 0;
}
