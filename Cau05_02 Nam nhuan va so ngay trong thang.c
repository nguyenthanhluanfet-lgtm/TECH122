#include <stdio.h>

int laNamNhuan(int nam) {
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
        return 1;
    }
    return 0;
}

int soNgay(int thang, int nam) {
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (laNamNhuan(nam)) {
                return 29;
            }
            return 28;
        default:
            return 0;
    }
}

int main() {
    int thang, nam;
    scanf("%d %d", &thang, &nam);

    int ngay = soNgay(thang, nam);

    if (ngay == 0) {
        printf("Thang khong hop le\n");
    } else {
        printf("%d\n", ngay);
    }
    return 0;
}
