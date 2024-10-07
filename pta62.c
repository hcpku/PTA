#include<stdio.h>

int main() {
    int n, t, m = 1, x;
    double sum = 1.0;
    scanf("%d", &n);
    for (t = 1; t <= n; t++) {
        m = 1;
        for (x = 1; x <= t; x++) {
            m = m * x;
        }
        sum = sum + 1.0 / m;
    }
    printf("%.8f", sum);
}