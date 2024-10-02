#include<stdio.h>

int main() {
    int m, n, i, x = 0;
    double y = 0.0, end;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        x = x + i * i;
        y = y + 1.0 / i;
    }
    end = x + y;
    printf("sum = %.6f", end);
}