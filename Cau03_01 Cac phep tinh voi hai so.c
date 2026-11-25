#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Tong = %d\n", a + b);
    printf("Hieu = %d\n", a - b);
    printf("Tich = %d\n", a * b);
    printf("Thuong nguyen = %d\n", a / b);
    printf("Du = %d\n", a % b);
    printf("Thuong thuc = %.2f\n", (double)a / b);
    return 0;
}
