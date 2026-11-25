#include <stdio.h>
#include <ctype.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);

    int soChuCai = 0, soChuSo = 0, soNguyenAm = 0, soTu = 0;
    int dangTrongTu = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (isalpha((unsigned char)c)) {
            soChuCai++;
            char t = tolower((unsigned char)c);
            if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u') {
                soNguyenAm++;
            }
        }

        if (isdigit((unsigned char)c)) {
            soChuSo++;
        }

        if (isspace((unsigned char)c)) {
            dangTrongTu = 0;
        } else if (!dangTrongTu) {
            soTu++;
            dangTrongTu = 1;
        }
    }

    printf("So chu cai: %d\n", soChuCai);
    printf("So chu so: %d\n", soChuSo);
    printf("So nguyen am: %d\n", soNguyenAm);
    printf("So tu: %d\n", soTu);
    return 0;
}
