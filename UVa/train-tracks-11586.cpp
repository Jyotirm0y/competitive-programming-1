// author: Rodrigo Alves Vieira
// problem: Train Tracks
// url: https://onlinejudge.org/external/115/11586.pdf
// status: WIP
// submitted: August 12th 2020
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

#define SPACE ' '

int main() {
    int TC, line_length;
    char c1, c2;
    string line;

    bool solved;

    scanf("%d\n", &TC);

    while (TC--) {
        solved = false;

        getline(cin, line);

        line_length = line.length();

        char c1start, c1end, c2start, c2end, c1last, c2last, c1next;
        c1start = line.at(0);
        c1end = line.at(1);

        c2start = line.at(line_length - 2);
        c2end = line.at(line_length - 1);

        if (c2end == c1start) {
            printf("NO LOOP\n");
            continue;
        }

        for (int i = 3; !solved && i < line_length - 2; i++) {
            if (line.at(i) == SPACE) {
                c1last = line.at(i - 2);
                c2last = line.at(i - 1);

                c1next = line.at(i + 1);

                if (c2last == c1next) {
                    printf("NO LOOP\n");
                    solved = true;
                }
            }
        }

        if (!solved) {
            printf("LOOP\n");
        }
    }

    return 0;
}