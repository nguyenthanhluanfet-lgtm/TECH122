#include <stdio.h>

int demLan(int a[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) dem++;
    }
    return dem;
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int giaTriTot = a[0];
    int demMax = demLan(a, n, a[0]);

    for (int i = 1; i < n; i++) {
        int dem = demLan(a, n, a[i]);
        if (dem > demMax || (dem == demMax && a[i] < giaTriTot)) {
            demMax = dem;
            giaTriTot = a[i];
        }
    }

    printf("%d %d\n", giaTriTot, demMax);
    return 0;
}
