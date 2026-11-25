#include <stdio.h>

int laNguyenTo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int dem = 0;
    long long tong = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (laNguyenTo(x)) {
            dem++;
            tong += x;
        }
    }

    printf("%d %lld\n", dem, tong);
    return 0;
}
