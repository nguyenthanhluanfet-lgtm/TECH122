#include <stdio.h>

int main() {
    int n, a[10][10];
    scanf("%d", &n);

    int tren = 0, duoi = n - 1, trai = 0, phai = n - 1;
    int so = 1;

    while (tren <= duoi && trai <= phai) {
        for (int j = trai; j <= phai; j++) {
            a[tren][j] = so++;
        }
        tren++;

        for (int i = tren; i <= duoi; i++) {
            a[i][phai] = so++;
        }
        phai--;

        if (tren <= duoi) {
            for (int j = phai; j >= trai; j--) {
                a[duoi][j] = so++;
            }
            duoi--;
        }

        if (trai <= phai) {
            for (int i = duoi; i >= tren; i--) {
                a[i][trai] = so++;
            }
            trai++;
        }
    }

    int tongChinh = 0, tongPhu = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
        tongChinh += a[i][i];
        tongPhu += a[i][n - 1 - i];
    }

    printf("Duong cheo chinh: %d\n", tongChinh);
    printf("Duong cheo phu: %d\n", tongPhu);
    return 0;
}
