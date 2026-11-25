#include <stdio.h>

long long tinhTien(int k) {
    long long tien = 0;

    if (k <= 50) {
        tien = k * 1800LL;
    } else if (k <= 100) {
        tien = 50 * 1800LL + (k - 50) * 2000LL;
    } else if (k <= 200) {
        tien = 50 * 1800LL + 50 * 2000LL + (k - 100) * 2500LL;
    } else {
        tien = 50 * 1800LL + 50 * 2000LL + 100 * 2500LL + (k - 200) * 3000LL;
    }
    return tien;
}

int main() {
    int k;
    scanf("%d", &k);

    long long tien = tinhTien(k);
    long long thue = tien / 10;
    long long tong = tien + thue;

    printf("%lld %lld %lld\n", tien, thue, tong);
    return 0;
}
