#include <stdio.h>

int main() {
    double result;
    double x;
    scanf("%lf", &x);
    if (x == 0) {
        result = 0.0;
    }
    if (x != 0.0) {
        result = 1.0 / x;
    }
    printf("f(%.1f) = %.1f", x, result);
    return 0;
}