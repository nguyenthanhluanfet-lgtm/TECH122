#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tongChan = 0;
    long long giaiThua = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            tongChan += i;
        }
        giaiThua *= i;
    }

    printf("%d %lld\n", tongChan, giaiThua);
    return 0;
}
