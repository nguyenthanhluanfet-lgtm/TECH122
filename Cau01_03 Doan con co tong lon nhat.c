#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int tongMax = a[0];
    int dau = 0, cuoi = 0;

    for (int i = 0; i < n; i++) {
        int tong = 0;
        for (int j = i; j < n; j++) {
            tong += a[j];
            if (tong > tongMax) {
                tongMax = tong;
                dau = i;
                cuoi = j;
            }
        }
    }

    printf("%d %d %d\n", tongMax, dau, cuoi);
    return 0;
}
