#include <stdio.h>

typedef struct {
    long long tu;
    long long mau;
} PhanSo;

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long du = a % b;
        a = b;
        b = du;
    }
    return a;
}

PhanSo rutGon(PhanSo p) {
    if (p.tu == 0) {
        p.mau = 1;
        return p;
    }

    if (p.mau < 0) {
        p.tu = -p.tu;
        p.mau = -p.mau;
    }

    long long tuDuong = p.tu;
    if (tuDuong < 0) tuDuong = -tuDuong;

    long long g = ucln(tuDuong, p.mau);
    p.tu = p.tu / g;
    p.mau = p.mau / g;
    return p;
}

int main() {
    PhanSo a, b;
    scanf("%lld %lld %lld %lld", &a.tu, &a.mau, &b.tu, &b.mau);

    a = rutGon(a);
    b = rutGon(b);

    PhanSo tong, hieu, tich, thuong;

    tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
    tong = rutGon(tong);

    hieu.tu = a.tu * b.mau - b.tu * a.mau;
    hieu.mau = a.mau * b.mau;
    hieu = rutGon(hieu);

    tich.tu = a.tu * b.tu;
    tich.mau = a.mau * b.mau;
    tich = rutGon(tich);

    printf("Tong: %lld/%lld\n", tong.tu, tong.mau);
    printf("Hieu: %lld/%lld\n", hieu.tu, hieu.mau);
    printf("Tich: %lld/%lld\n", tich.tu, tich.mau);

    if (b.tu == 0) {
        printf("Thuong: Khong xac dinh\n");
    } else {
        thuong.tu = a.tu * b.mau;
        thuong.mau = a.mau * b.tu;
        thuong = rutGon(thuong);
        printf("Thuong: %lld/%lld\n", thuong.tu, thuong.mau);
    }

    long long vePhai = a.tu * b.mau;
    long long veTrai = b.tu * a.mau;

    if (vePhai > veTrai) {
        printf("So sanh: lon hon\n");
    } else if (vePhai < veTrai) {
        printf("So sanh: nho hon\n");
    } else {
        printf("So sanh: bang nhau\n");
    }
    return 0;
}
