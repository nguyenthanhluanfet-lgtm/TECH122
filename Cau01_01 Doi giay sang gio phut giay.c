#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int gio = n / 3600;
    int phut = (n % 3600) / 60;
    int giay = n % 60;

    printf("%02d:%02d:%02d\n", gio, phut, giay);
    return 0;
}
