#include <stdio.h>
#include <string.h>

// Reads a variable number of inputs per line. Without knowing the number of inputs per line
int main() {
    char *c;
    char line[100];
    int x, sum = 0;

    while(gets(line)) {
        for(c = strtok(line, " "); c ; c = strtok(NULL, " ")) {
            sscanf(c, "%d", &x);
            sum += x;
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
