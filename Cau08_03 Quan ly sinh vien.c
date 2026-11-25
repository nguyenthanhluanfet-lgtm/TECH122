#include <stdio.h>
#include <string.h>

enum HocLuc { YEU, TRUNG_BINH, KHA, GIOI };

typedef struct {
    char ma[21];
    char ten[31];
    double diem;
} SinhVien;

enum HocLuc xepLoai(double diem) {
    if (diem >= 8.5) return GIOI;
    if (diem >= 7.0) return KHA;
    if (diem >= 5.0) return TRUNG_BINH;
    return YEU;
}

const char *tenHocLuc(enum HocLuc h) {
    switch (h) {
        case GIOI: return "Gioi";
        case KHA: return "Kha";
        case TRUNG_BINH: return "Trung binh";
        default: return "Yeu";
    }
}

void inSinhVien(SinhVien s) {
    printf("%s %s %.1f %s\n", s.ma, s.ten, s.diem, tenHocLuc(xepLoai(s.diem)));
}

int main() {
    int n;
    SinhVien sv[50];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf", sv[i].ma, sv[i].ten, &sv[i].diem);
    }

    int lenh;
    while (scanf("%d", &lenh) == 1 && lenh != 0) {
        if (lenh == 1) {
            for (int i = 0; i < n; i++) {
                inSinhVien(sv[i]);
            }
        } else if (lenh == 2) {
            char ma[21];
            scanf("%s", ma);

            int viTri = -1;
            for (int i = 0; i < n; i++) {
                if (strcmp(sv[i].ma, ma) == 0) {
                    viTri = i;
                }
            }

            if (viTri == -1) {
                printf("Khong tim thay\n");
            } else {
                inSinhVien(sv[viTri]);
            }
        } else if (lenh == 3) {
            int viTriMax = 0;
            for (int i = 1; i < n; i++) {
                if (sv[i].diem > sv[viTriMax].diem) {
                    viTriMax = i;
                }
            }
            printf("%s %s %.1f\n", sv[viTriMax].ma, sv[viTriMax].ten, sv[viTriMax].diem);
        } else if (lenh == 4) {
            int dem[4] = {0, 0, 0, 0};
            for (int i = 0; i < n; i++) {
                dem[xepLoai(sv[i].diem)]++;
            }
            printf("Gioi: %d Kha: %d Trung binh: %d Yeu: %d\n",
                   dem[GIOI], dem[KHA], dem[TRUNG_BINH], dem[YEU]);
        }
    }
    return 0;
}
