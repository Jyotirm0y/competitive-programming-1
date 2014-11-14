#include <stdio.h>

long long abs(long long n)
{
    if (n < 0) return -n;
    return n;
}

int main()
{
    freopen("entrada-warrior.txt", "r", stdin);

    long long N, M;

    while(scanf("%lld %lld", &N, &M) == 2) {
        printf("%lld\n", abs(N-M));
    }

    return 0;
}
