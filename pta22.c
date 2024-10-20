#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf", &x);
    if (x == 10) {
        y = 1.0 / x;
    } else {
        y = x;
    }
    printf("f(%.1f) = %.1f", x, y);
    return 0;
}