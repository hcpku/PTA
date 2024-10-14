#include<stdio.h>

int main() {
    int high, n;
    double s = 0, t = 0;
    scanf("%d %d", &high, &n);
    if (n > 0) {
        s = high;
        t = high;
        for (; n > 0; n--) {
            t = t * 0.5;
            s = s + 2.0 * t;
        }
    }
    printf("%.1f %.1f", s, t);
}