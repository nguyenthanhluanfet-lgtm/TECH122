#include <stdio.h>

int xoaTrung(int a[], int n) {
    int soMoi = 0;

    for (int i = 0; i < n; i++) {
        int daCo = 0;
        for (int j = 0; j < soMoi; j++) {
            if (a[j] == a[i]) {
                daCo = 1;
            }
        }
        if (!daCo) {
            a[soMoi] = a[i];
            soMoi++;
        }
    }
    return soMoi;
}

int dungTruoc(int x, int y) {
    int xChan = (x % 2 == 0);
    int yChan = (y % 2 == 0);

    if (xChan && !yChan) return 1;
    if (!xChan && yChan) return 0;
    if (xChan && yChan) return x < y;
    return x > y;
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int soMoi = xoaTrung(a, n);

    for (int i = 0; i < soMoi - 1; i++) {
        for (int j = i + 1; j < soMoi; j++) {
            if (dungTruoc(a[j], a[i])) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }

    for (int i = 0; i < soMoi; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    printf("%d\n", n - soMoi);
    return 0;
}
