#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tachTu(char s[]) {
    char ban[105];
    char *tu[60];
    int dem = 0;

    strcpy(ban, s);

    char *p = strtok(ban, " \t\n");
    while (p != NULL) {
        tu[dem] = p;
        dem++;
        p = strtok(NULL, " \t\n");
    }

    for (int i = dem - 1; i >= 0; i--) {
        printf("%s", tu[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int doiXung(char s[]) {
    char sach[105];
    int k = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace((unsigned char)s[i])) {
            sach[k] = tolower((unsigned char)s[i]);
            k++;
        }
    }

    for (int i = 0, j = k - 1; i < j; i++, j--) {
        if (sach[i] != sach[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);

    tachTu(s);

    if (doiXung(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
