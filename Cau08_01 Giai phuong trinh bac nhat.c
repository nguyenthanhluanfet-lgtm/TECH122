#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("Vo so nghiem\n");
        } else {
            printf("Vo nghiem\n");
        }
    } else {
        double x = -b / a;
        if (x > -0.005 && x < 0.005) {
            x = 0;
        }
        printf("x = %.2f\n", x);
    }
    return 0;
}
