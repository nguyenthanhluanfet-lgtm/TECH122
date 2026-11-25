#include <stdio.h>

int main() {
    double T, L, H;
    scanf("%lf %lf %lf", &T, &L, &H);

    double tb = (2 * T + L + H) / 4;

    printf("%.2f ", tb);
    if (tb >= 8.5) {
        printf("Gioi\n");
    } else if (tb >= 7.0) {
        printf("Kha\n");
    } else if (tb >= 5.0) {
        printf("Trung binh\n");
    } else {
        printf("Yeu\n");
    }
    return 0;
}
