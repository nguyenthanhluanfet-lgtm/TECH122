#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int soChuSo = 0;
    int tong = 0;
    int max = 0;

    while (n > 0) {
        int chuSo = n % 10;
        soChuSo++;
        tong += chuSo;
        if (chuSo > max) max = chuSo;
        n = n / 10;
    }

    printf("%d %d %d\n", soChuSo, tong, max);
    return 0;
}
