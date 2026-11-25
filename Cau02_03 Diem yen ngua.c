#include <stdio.h>

int main() {
    int m, n, a[10][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int coDiem = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int nhoNhatHang = 1;
            for (int k = 0; k < n; k++) {
                if (a[i][k] < a[i][j]) nhoNhatHang = 0;
            }

            int lonNhatCot = 1;
            for (int k = 0; k < m; k++) {
                if (a[k][j] > a[i][j]) lonNhatCot = 0;
            }

            if (nhoNhatHang && lonNhatCot) {
                printf("%d %d %d\n", i, j, a[i][j]);
                coDiem = 1;
            }
        }
    }

    if (!coDiem) {
        printf("KHONG CO\n");
    }
    return 0;
}
