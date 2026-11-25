#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    double tb = (a + b + c) / 3.0;

    printf("%d %d %.2f\n", max, min, tb);
    return 0;
}
