#include <stdio.h>

int chen(int a[], int n, int k, int x) {
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    return n + 1;
}

int xoa(int a[], int n, int p) {
    for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    return n - 1;
}

void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int main() {
    int n, a[60];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x, k, p;
    scanf("%d %d", &x, &k);
    scanf("%d", &p);

    n = chen(a, n, k, x);
    inMang(a, n);

    n = xoa(a, n, p);
    inMang(a, n);
    return 0;
}
