#include <stdio.h>

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long du = a % b;
        a = b;
        b = du;
    }
    return a;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long g = ucln(a, b);
    long long bcnn = a / g * b;

    printf("%lld %lld\n", g, bcnn);
    printf("%lld/%lld\n", a / g, b / g);
    return 0;
}
