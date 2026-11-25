#include <stdio.h>

void taoFib(long long f[], int n) {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

long long tongChan(long long f[], int n) {
    long long tong = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] % 2 == 0) {
            tong += f[i];
        }
    }
    return tong;
}

int main() {
    int n;
    long long f[60];
    scanf("%d", &n);

    taoFib(f, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%lld", f[i]);
    }
    printf("\n");
    printf("Tong so chan: %lld\n", tongChan(f, n));
    return 0;
}
