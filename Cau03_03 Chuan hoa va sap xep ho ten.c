#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void chuanHoa(char s[]) {
    char kq[256];
    int k = 0;
    int dauTu = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) {
            dauTu = 1;
        } else {
            if (dauTu && k > 0) {
                kq[k++] = ' ';
            }
            if (dauTu) {
                kq[k++] = toupper((unsigned char)s[i]);
            } else {
                kq[k++] = tolower((unsigned char)s[i]);
            }
            dauTu = 0;
        }
    }
    kq[k] = '\0';
    strcpy(s, kq);
}

void layTen(char ds[][256], int n) {
    char ten[50][256];

    for (int i = 0; i < n; i++) {
        char *viTri = strrchr(ds[i], ' ');
        if (viTri == NULL) {
            strcpy(ten[i], ds[i]);
        } else {
            strcpy(ten[i], viTri + 1);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sanh = strcmp(ten[i], ten[j]);
            if (sanh == 0) {
                sanh = strcmp(ds[i], ds[j]);
            }
            if (sanh > 0) {
                char tam[256];

                strcpy(tam, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], tam);

                strcpy(tam, ds[i]);
                strcpy(ds[i], ds[j]);
                strcpy(ds[j], tam);
            }
        }
    }
}

int main() {
    char dong[256];
    char ds[50][256];

    fgets(dong, sizeof(dong), stdin);
    int n = atoi(dong);

    for (int i = 0; i < n; i++) {
        fgets(ds[i], sizeof(ds[i]), stdin);
        chuanHoa(ds[i]);
    }

    layTen(ds, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", ds[i]);
    }
    return 0;
}
