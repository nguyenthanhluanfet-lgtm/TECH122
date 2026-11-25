#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tong = 0;

    for (int i = 1; i <= 10; i++) {
        int kq = n * i;
        printf("%d x %d = %d\n", n, i, kq);
        tong += kq;
    }

    printf("Tong cac ket qua: %d\n", tong);
    return 0;
}
