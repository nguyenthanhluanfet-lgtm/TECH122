#include <stdio.h>

int main() {
    int m, n, a[10][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Tong hang:");
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) {
            tong += a[i][j];
        }
        printf(" %d", tong);
    }
    printf("\n");

    printf("Tong cot:");
    for (int j = 0; j < n; j++) {
        int tong = 0;
        for (int i = 0; i < m; i++) {
            tong += a[i][j];
        }
        printf(" %d", tong);
    }
    printf("\n");

    int max = a[0][0];
    int hang = 0, cot = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                hang = i;
                cot = j;
            }
        }
    }
    printf("Max: %d tai (%d,%d)\n", max, hang, cot);
    return 0;
}
