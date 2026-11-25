#include <stdio.h>

long long daoSo(long long n) {
    long long kq = 0;
    while (n > 0) {
        kq = kq * 10 + n % 10;
        n = n / 10;
    }
    return kq;
}

int main() {
    long long n;
    scanf("%lld", &n);

    long long dao = daoSo(n);

    printf("%lld ", dao);
    if (dao == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
