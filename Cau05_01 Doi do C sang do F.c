#include <stdio.h>

int main() {
    double C;
    scanf("%lf", &C);

    double F = C * 9 / 5 + 32;

    printf("%.2f ", F);
    if (C < 35) {
        printf("Ha than nhiet\n");
    } else if (C <= 37.5) {
        printf("Binh thuong\n");
    } else {
        printf("Sot\n");
    }
    return 0;
}
