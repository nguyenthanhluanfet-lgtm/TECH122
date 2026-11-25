#include <stdio.h>
#include <string.h>

typedef struct {
    char ma[21];
    char ten[21];
    int gia;
    int soLuong;
} SanPham;

long long giaTriTon(SanPham s) {
    return (long long)s.gia * s.soLuong;
}

int main() {
    int n;
    SanPham sp[50];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d", sp[i].ma, sp[i].ten, &sp[i].gia, &sp[i].soLuong);
    }

    long long tong = 0;
    int viTriMax = 0;
    for (int i = 0; i < n; i++) {
        tong += giaTriTon(sp[i]);
        if (giaTriTon(sp[i]) > giaTriTon(sp[viTriMax])) {
            viTriMax = i;
        }
    }

    printf("Tong gia tri kho: %lld\n", tong);
    printf("Gia tri ton kho lon nhat: %s %s\n", sp[viTriMax].ma, sp[viTriMax].ten);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int doiCho = 0;
            if (sp[i].gia < sp[j].gia) {
                doiCho = 1;
            } else if (sp[i].gia == sp[j].gia && strcmp(sp[i].ma, sp[j].ma) > 0) {
                doiCho = 1;
            }
            if (doiCho) {
                SanPham tam = sp[i];
                sp[i] = sp[j];
                sp[j] = tam;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %s %d %d\n", sp[i].ma, sp[i].ten, sp[i].gia, sp[i].soLuong);
    }
    return 0;
}
