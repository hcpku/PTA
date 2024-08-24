#include<stdio.h>

int main() {
    int n = 1;
    double x;
    double y;
    int t = 1;
    double sum = 0.0;
    scanf("%lf", &x);
    y = 1.0 / n;
    for (y = y; (1.0 / n) >= x; n += 3) {
        y = 1.0 / n;
        sum = sum + t * y;
        t = -1 * t;
    }
    printf("sum = %.6f", sum);
}